<<<<<<< HEAD
nasm -f elf64 strcmp.s -Wall
gcc -shared strcmp.o -o libasm.so
gcc bonus/strcmp/main.c -L./ -lasm -fno-builtin
=======
nasm -f elf64 strcmp.s -Wall -Ox
gcc -shared strcmp.o -o libasm.so
gcc bonus/strcmp/main.c -L./-lasm -fno-builtin
>>>>>>> 95456636fd8a7c773da5c519dbe18b81c93fbc79
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out