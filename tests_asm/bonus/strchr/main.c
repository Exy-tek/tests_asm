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
    printf("\n-------------STRCHR-------------\n");
    printf("FOUND () = %s\n", strchr("Test...", '\0'));
    printf("FOUND (t...) = %s\n", strchr("Test...", 't'));
    printf("NOT FOUND (nil) = %p\n", strchr("Test...", 'a'));
}

/*
;; compiler
;; nasm -f elf64 strlen.s -Wall -Ox
;; gcc -shared strlen.o -o libasm.so
;; gcc main.c -L./-lasm -fno-builtin
;; LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out
 */ 
