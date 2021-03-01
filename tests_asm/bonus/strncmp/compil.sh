nasm -f elf64 strncmp.s -Wall -Ox
gcc -shared strncmp.o -o libasm.so
gcc bonus/strncmp/main.c -L./-lasm -fno-builtin
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out