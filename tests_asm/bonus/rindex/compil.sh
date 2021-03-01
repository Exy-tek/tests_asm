nasm -f elf64 rindex.s -Wall -Ox
gcc -shared rindex.o -o libasm.so
gcc bonus/rindex/main.c -L./-lasm -fno-builtin
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out