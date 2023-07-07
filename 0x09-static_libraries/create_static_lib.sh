#/bin/bash
gcc -wall -pedabtic werror -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
