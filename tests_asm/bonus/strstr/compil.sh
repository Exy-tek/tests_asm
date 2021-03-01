nasm -f elf64 strstr.s -Wall -Ox
gcc -shared strstr.o -o libasm.so
gcc bonus/strstr/main.c -L./-lasm -fno-builtin
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out