nasm -f elf64 memcpy.s -Wall -Ox
gcc -shared memcpy.o -o libasm.so
gcc bonus/memcpy/main.c -L./-lasm -fno-builtin
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out