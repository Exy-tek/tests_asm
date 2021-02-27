nasm -f elf64 memmove.s -Wall -Ox
gcc -shared memmove.o -o libasm.so
gcc bonus/memmove/main.c -L./-lasm -fno-builtin
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out