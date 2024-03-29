#!/bin/bash

export LD_PRELOAD=./rand.so
./gm 9 8 10 24 75 9
rm ./rand.so
