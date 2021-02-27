nasm -f elf64 strchr.s -Wall -Ox
gcc -shared strchr.o -o libasm.so
gcc bonus/strchr/main.c -L./-lasm -fno-builtin
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out