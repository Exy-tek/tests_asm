/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str = malloc(sizeof(char) * 4);
    char *str2 = malloc(sizeof(char) * 4);

<<<<<<< HEAD
    memset(str, 'A', 4);
    memset(str2, 'B', 4);
    
=======
>>>>>>> 95456636fd8a7c773da5c519dbe18b81c93fbc79
    printf("\n-------------MEMMOVE-------------\n");
    memmove(str, str2, 2);
    printf("Gito (BBto) = %s\n", str);
    printf("BBBB (BBBB) = %s\n", str2);
    return 0;
}

/*
;; compiler
;; nasm -f elf64 strlen.s -Wall -Ox
;; gcc -shared strlen.o -o libasm.so
;; gcc main.c -L./-lasm -fno-builtin
;; LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out
 */ 
