nasm -f elf64 strpbrk.s -Wall -Ox
gcc -shared strpbrk.o -o libasm.so
gcc bonus/strpbrk/main.c -L./-lasm -fno-builtin
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out