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
    printf("\n-------------RINDEX-------------\n");
    printf("OK () = %s\n", rindex("GITO PD", '\0'));
    printf("OK2 (PAS) = %s\n", rindex("GITO PD OU PAS", 'P'));
    //printf("NOT OK (null) = %s\n", rindex("GITO PD", 'A'));
    //printf("NULL (null) = %s\n", rindex(NULL, 'A'));

   return 0;
}

/*
;; compiler
;; nasm -f elf64 strlen.s -Wall -Ox
;; gcc -shared strlen.o -o libasm.so
;; gcc main.c -L./-lasm -fno-builtin
;; LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out
 */ 
