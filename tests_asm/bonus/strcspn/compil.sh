nasm -f elf64 strcspn.s -Wall -Ox
gcc -shared strcspn.o -o libasm.so
gcc bonus/strcspn/main.c -L./-lasm -fno-builtin
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out