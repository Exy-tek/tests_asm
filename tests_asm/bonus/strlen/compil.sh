nasm -f elf64 strlen.s -Wall -Ox
gcc -shared strlen.o -o libasm.so
gcc bonus/strlen/main.c -L./-lasm -fno-builtin
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out