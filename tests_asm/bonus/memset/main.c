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

    memset(str, 'A', 4);
    memset(str2, 'B', 4);

    printf("\n-------------MEMSET-------------\n");
    printf("AAAA (AAAA) = %s\n", str);
    printf("BBBB (AAAA) = %s\n", str2);
    return 0;
}

/*
;; compiler
;; nasm -f elf64 strlen.s -Wall -Ox
;; gcc -shared strlen.o -o libasm.so
;; gcc main.c -L./-lasm -fno-builtin
;; LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out
 */ 
