#!/bin/bash
# Ref.: https://stackoverflow.com/questions/2224334/gcc-dump-preprocessor-defines

gcc -dM -E - < /dev/null
