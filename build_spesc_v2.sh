#!/bin/bash
set -xe

DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

#################### SPEsc v2 ########################
# Clean
cd $DIR
make clean

COPYDIR=build_all/SPEsc_v2
mkdir -p $DIR/$COPYDIR
rm -f $DIR/$COPYDIR/*

# default
touch conf_general.h
make -j8 build_args='-DHW_SOURCE=\"hw_spesc_v2.c\" -DHW_HEADER=\"hw_spesc_v2.h\"' USE_VERBOSE_COMPILE=no
cd $DIR
cp $DIR/build/BLDC_4_ChibiOS.bin $COPYDIR/VESC_default.bin
cp $DIR/build/BLDC_4_ChibiOS.bin $COPYDIR/VESC_SPEsc_v2_37n_`date "+%m%d"`.bin

