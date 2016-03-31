#!/bin/bash
# Default settings

PATH=$PWD/prebuilts/arm-linux-androideabi-4.7/bin:$PATH

make O=out $1 $2 $3
