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
    printf("\n-------------STRCASECMP-------------\n");
    printf("OK (0)= %d\n", strcasecmp("GITO PD", "gito pd"));
    printf("NOT OK (12)= %d\n", strcasecmp("GITO PD", "GITO dst pas PD"));
    printf("OK (0)= %d\n", strcasecmp("GITO PD", "GITO PD"));
    printf("NOT OK (11)= %d\n", strcasecmp("GITO PD", "GITO est pas PD"));

   return 0;
}

/*
;; compiler
;; nasm -f elf64 strlen.s -Wall -Ox
;; gcc -shared strlen.o -o libasm.so
;; gcc main.c -L./-lasm -fno-builtin
;; LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out
 */ 
