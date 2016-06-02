#!/bin/bash
# Default settings

export PATH=$PWD/toolchains/UBERTC/DespairFactor-arm-eabi-6.0/bin:$PATH
export CROSS_COMPILE=arm-eabi-
#PATH=$PWD/prebuilts/arm-linux-androideabi-4.7/bin:$PATH

make $1 $2
