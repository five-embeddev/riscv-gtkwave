#!/bin/env python3
#
# Generate GTKWave enumeration files for CSR register values
#

import argparse
import sys
import os
import traceback
import vcd
import vcd.gtkw
import io

from typing import IO, Any, Dict, Generator, List, Optional, Sequence, Tuple, Union

import yaml

parser = argparse.ArgumentParser(
    description='Generate gtkwave defines from YAML.')
parser.add_argument('yaml', type=str,
                    help='CSR Definition file')
parser.add_argument('out_dir', type=str,
                    help='Output folder')

SIZES={
    'mxlen' : 64,
    'sxlen' : 64,
    'uxlen' : 64,
}
EXPAND_MAX_WIDTH=16
install_path="../csr_data/"

def eval_field_bits(bits):
    if isinstance(bits,int):
        return bits
    return eval(bits,SIZES)

def get_field_width(data):
    if len(data['bits']) == 1:
        return 1
    else:
        msb = eval_field_bits(data['bits'][0])
        lsb = eval_field_bits(data['bits'][1])
        width = msb-lsb+1
        return width

def get_field_range(data):
    if len(data['bits']) == 1:
        msb = eval_field_bits(data['bits'][0])
        return msb, msb
    else:
        msb = eval_field_bits(data['bits'][0])
        lsb = eval_field_bits(data['bits'][1])
        width = msb-lsb+1
        return msb, lsb

def format_field_range(msb, lsb):
    return f"{msb}:{lsb}"


class UpdateGTKWSave(vcd.gtkw.GTKWSave):
    def trace_bit_group(
        self,
        lsb: int, msb: int,
        name: str,
        alias: str,
        color: Optional[Union[vcd.gtkw.GTKWColor, str, int]] = None,
        translate_filter_file: Optional[str] = None,
    ) -> None:
        """Trace individual bit of vector signal.

        This is meant for use in conjunction with :meth:`trace_bits()`.

        :param int msb: first of bit
        :param int lsb: last of bit
        :param str name: name of parent vector signal.
        :param str alias: optional alias to display for bit.
        :param int color: optional color for bit's trace.

        """
        width = msb-lsb
        org_flags = self._flags
        flags = vcd.gtkw.GTKWFlag.__members__['bin']
        if width > 4:
            flags = vcd.gtkw.GTKWFlag.__members__['dec']
        if translate_filter_file:
            flags |= vcd.gtkw.GTKWFlag.ftranslated
        self._set_flags(flags)
        self._set_translate_filter_file(translate_filter_file)
        self._set_color(color)
        self._p(f'#{{{alias}}} ', end='')
        for i in range(lsb, msb):
            self._p(f'({i}){name} ', end='')
        self._p(f'')
        self._set_flags(org_flags)

def main():

    args = parser.parse_args()

    yaml_data=None
    with open(args.yaml, 'r') as fin :
        try:
            yaml_data = yaml.full_load(fin)
        except yaml.YAMLError as exc:
            print("ERROR: Parsing YAML file: " + args.yaml)            
            return -1


    for reg_name, reg_data in yaml_data['regs'].items():
        reg_width=SIZES['mxlen']
        vector=f"[{reg_width-1}:0]"
        outfile = os.path.join(args.out_dir, f"{reg_name}.gtkw")
        if 'fields' in reg_data:
            with open(outfile,"w") as rout:
                gtkw =  UpdateGTKWSave(rout)
                gtkw.comment(f"Fields for register {reg_name}")
                try:
                    reg_path=f"riscv_isa_sim.core0.csrs.{reg_name}{vector}"
                    gtkw.begin_group(reg_name)
                    with gtkw.trace_bits(reg_path):
                        for fkey, fdata in reg_data['fields'].items():
                            gtkw.comment(f"Field {reg_name}_{fkey}")
                            translate_filter_file=None
                            fwidth=get_field_width(fdata)
                            msb,lsb=get_field_range(fdata)
                            if fwidth==1:
                                gtkw.trace_bit(reg_width-lsb-1, 
                                    name=f"{reg_path}",
                                    alias=f"{reg_name}_{fkey}")
                            else:
                                if 'enums' in fdata:
                                    translations = [(eval_field_bits(value), label) 
                                                    for label, value in fdata['enums'].items()]
                                    translate_filter_file=os.path.join(install_path,reg_name + "." + fkey + ".gtkw")
                                    with open(os.path.join(args.out_dir, translate_filter_file),"w") as fout:
                                        fout.write(vcd.gtkw.make_translation_filter(translations, datafmt='dec', size=fwidth))
                                gtkw.trace_bit_group(
                                    reg_width-msb-1, 
                                    reg_width-lsb, 
                                    name=f"{reg_path}",
                                    alias=f"{reg_name}_{fkey}",
                                    translate_filter_file=translate_filter_file)
                    gtkw.end_group(reg_name)
                except Exception as e:
                    print(e)
                    print(traceback.format_exc())
                    pass
                gtkw.comment(f"Done")
                rout.flush()



if __name__ == '__main__':
    exit( main())
