nasm -f elf64 strchr.s -Wall -Ox
gcc -shared strchr.o -o libasm.so
<<<<<<< HEAD
gcc bonus/strchr/main.c -L./ -lasm -fno-builtin
=======
gcc bonus/strchr/main.c -L./-lasm -fno-builtin
>>>>>>> 95456636fd8a7c773da5c519dbe18b81c93fbc79
LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out