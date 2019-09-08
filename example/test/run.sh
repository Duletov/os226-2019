#!/bin/bash

. ../test/lib.sh

make

cmpout test/1 ./main
