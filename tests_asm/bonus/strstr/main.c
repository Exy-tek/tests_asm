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
    printf("\n-------------STRSTR-------------\n");
    printf("FOUND (to...) = %s\n", strstr("Gito...", "to"));
    printf("FOUND (Gito...) = %s\n", strstr("Gito...", "Gito..."));
    printf("0 (Gito...) = %s\n", strstr("Gito...", "\0"));
    printf("NOT FOUND (null) = %s\n", strstr("Gito...", "al"));
    printf("TOO LONG (null) = %s\n", strstr("Gito...", "allllalalallalala"));
    //printf("NULL1 (null) = %s\n", strstr(NULL, "to"));
    //printf("NULL2 (null) = %s\n", strstr("Gito...", NULL));

    return 0;
}

/*
;; compiler
;; nasm -f elf64 strlen.s -Wall -Ox
;; gcc -shared strlen.o -o libasm.so
;; gcc main.c -L./-lasm -fno-builtin
;; LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out
 */ 
