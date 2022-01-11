#!/bin/zsh

#rm -r obj_dir

MODULES='Spec.sv'
TOP=Decode

verilator -Wall --trace -cc $MODULES $TOP.sv -prefix $TOP --exe tb_$TOP.cpp -CFLAGS "-std=c++2a"  
$1
make -f obj_dir/$TOP.mk
./obj_dir/$TOP