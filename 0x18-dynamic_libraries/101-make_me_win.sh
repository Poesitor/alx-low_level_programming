#!/bin/bash
echo -e '#include <stdlib.h>\nint rand() { return 9; }' > /tmp/rand.c
gcc -fPIC -shared -o /tmp/rand.so /tmp/rand.c -ldl
export LD_PRELOAD=/tmp/rand.so
