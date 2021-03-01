nasm -f elf64 memset.s -Wall -Ox
gcc -shared memset.o -o libasm.so
gcc bonus/memset/main.c -L./-lasm -fno-builtin
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out