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

    printf("\n-------------STRPBRK-------------\n");
    printf("FOUND (to...) = %s\n", strpbrk("Gito...", ".to"));
    printf("SAME (Gito...) = %s\n", strpbrk("Gito...", "Gito..."));
    printf("0 (nulll) = %s\n", strpbrk("Gito...", "\0"));
    printf("NOT FOUND (nulll) = %s\n", strpbrk("Gito...", "al"));
    printf("TOO LONG (nulll) = %s\n", strpbrk("Gito...", "allllalalallalala"));
    //printf("NULL1 (nulll) = %s\n", strpbrk(NULL, "to"));
    //printf("NULL2 (nulll) = %s\n", strpbrk("Gito...", NULL));

   return 0;
}

/*
;; compiler
;; nasm -f elf64 strlen.s -Wall -Ox
;; gcc -shared strlen.o -o libasm.so
;; gcc main.c -L./-lasm -fno-builtin
;; LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out
 */ 
