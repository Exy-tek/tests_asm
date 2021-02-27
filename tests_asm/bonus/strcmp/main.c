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

    printf("\n-------------STRCMP-------------\n");
    printf("OK = %d\n", strcmp("Test test", "Test test"));
    printf("same length (5) = %d\n", strcmp("Test tetx", "Test tets"));
    printf("Result (-18) < = %d\n", strcmp("String hello word", "String2"));
    printf("Result (32) > = %d\n", strcmp("hello world", "hello"));

   return 0;
}

/*
;; compiler
;; nasm -f elf64 strlen.s -Wall -Ox
;; gcc -shared strlen.o -o libasm.so
;; gcc main.c -L./-lasm -fno-builtin
;; LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out
 */ 
