nasm -f elf64 strcmp.s -Wall -Ox
gcc -shared strcmp.o -o libasm.so
gcc bonus/strcmp/main.c -L./-lasm -fno-builtin
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out