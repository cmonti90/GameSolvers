#!/bin/sh

export SIM_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
echo "SIM_DIR = ${SIM_DIR}"

export MATHLIB_DIR="/home/cmonti/Documents/Code/Libraries/myMathLib/install/lib/cmake/mathlib"
echo "MATHLIB_DIR = ${MATHLIB_DIR}"