#!/bin/env python3
#
# Generate GTKWave enumeration files for CSR register values
#

import argparse
import sys
import os
import traceback


import yaml

parser = argparse.ArgumentParser(
    description='Generate gtkwave defines from YAML.')
parser.add_argument('yaml', type=str,
                    help='CSR Definition file')
parser.add_argument('out_dir', type=str,
                    help='Output folder')

SIZES={
    'mxlen' : 32,
    'sxlen' : 32,
    'uxlen' : 32,
}
EXPAND_MAX_WIDTH=16

def eval_field_bits(bits):
    print("BITS",bits)
    if isinstance(bits,int):
        return bits
    return eval(bits,SIZES)

def gen_field_combs(name, data):
    if len(data['bits']) == 1:
        print(data['bits'])
        mask = 1 << eval_field_bits(data['bits'][0])
        lsb = eval_field_bits(data['bits'][0])
        if 'enums' in data:
            return [(eval_field_bits(value) << lsb, label) for label, value in data['enums'].items()]
        else:
            return [(0,""),(mask,name)]
    if len(data['bits']) == 2:
        msb = eval_field_bits(data['bits'][0])
        lsb = eval_field_bits(data['bits'][1])
        width = msb-lsb+1
        min_val = 1 << lsb
        max_val = (1 << (msb+1))-1
        mask = max_val & ~(min_val-1)
        if 'enums' in data:
            return [(eval_field_bits(value) << lsb, label) for label, value in data['enums'].items()]
        elif width < EXPAND_MAX_WIDTH:
            print(range(min_val, max_val, min_val))
            return [(value << lsb, f"{name}={value>>lsb}") for value in range(min_val, max_val, min_val)]
        else:
            return [(0,'')]

def gen_bit_comb(fields):
    # Filter out anything with multi-bit fields and 

    bits_simple = [(gen_field_combs(key,data),data)
                   for key, data in fields.items() 
                   if 'bits' in data and 'condition' not in data and ('custom' not in data or (not data['custom']))]

    bits_cond = [(gen_field_combs(key,data),data)
                 for key, data in fields.items() 
                 if 'bits' in data and 'condition' in data]

    def bits_to_str(this, remain):
        if len(remain)>0:
            output = []
            remain_strings = bits_to_str(remain[0], remain[1:])
            this_data = this[1]
            this_cond_mask = None
            this_cond_value = None
            if 'condition' in this_data:
                this_cond_mask = eval_field_bits(this_data['condition']['mask'])
                this_cond_value = eval_field_bits(this_data['condition']['value'])
                
            for [this_value, this_desc] in this[0]:
                for remain_value, remain_desc in remain_strings:
                    if this_cond_mask:
                        if not ((this_cond_mask & remain_value) ==  this_cond_value):
                            continue
                    if this_desc == '' and remain_desc == '':
                        output.append((this_value|remain_value,''))
                    elif this_desc == '' :
                        output.append((this_value|remain_value,remain_desc))
                    elif remain_desc == '' :
                        output.append((this_value|remain_value,this_desc))
                    else:
                        output.append((this_value|remain_value,this_desc + "|" + remain_desc))
            return output
        else:
            return this[0]
        return this_strings
    output_simple = bits_to_str(bits_simple[0], bits_simple[1:])
    if len(bits_cond)==0:
        return output_simple
    else:
        output = []
        for bit_cond in bits_cond:
            output.extend(bits_to_str(bit_cond, bits_simple))
    return output

    


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
        if 'fields' in reg_data:
            try:
                values = gen_bit_comb(reg_data['fields'])
                with open(os.path.join(args.out_dir, reg_name + ".gtkw"),"w") as fout:
                    for value, label in sorted(values):
                        fout.write(f"{value:0{16}x} {label}\n")
            except Exception as e:
                print(e)
                print(traceback.format_exc())
                pass


if __name__ == '__main__':
    exit( main())
