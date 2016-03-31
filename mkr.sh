#!/bin/bash
cp mediatek-boot/zImage recovery/kernel
cd recovery
./mkri
cp recovery.img ~/dd/Lenovo\ P780/2.8.4.0/0
