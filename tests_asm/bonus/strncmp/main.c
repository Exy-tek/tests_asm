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
    printf("\n-------------STRNCMP-------------\n");
    printf("OK (0) = %d\n", strncmp("hallo", "hello", 1));
    printf("NOT OK (-4) = %d\n", strncmp("hallo", "hello", 4));
    printf("NOT OK (-8) = %d\n", strncmp("hallo", "hillo", 2));

   return 0;
}

/*
;; compiler
;; nasm -f elf64 strlen.s -Wall -Ox
;; gcc -shared strlen.o -o libasm.so
;; gcc main.c -L./-lasm -fno-builtin
;; LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out
 */ 
