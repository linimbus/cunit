#!/bin/bash

rm -rf build

mkdir -p build
cd build
cmake .. -DENABLE_DEBUG=1 -DENABLE_32=0
make -j 4; make install
cd ..
