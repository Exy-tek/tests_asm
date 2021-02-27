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
    printf("\n-------------STRCSPN-------------\n");
    printf("Length (2) = %ld\n", strcspn("Gito...", "to"));
    //printf("NULL1 (0) = %ld\n", strcspn(NULL, "to"));
    //printf("NULL2 (0) = %ld\n", strcspn("Gito...", NULL));
  
   return 0;
}

/*
;; compiler
;; nasm -f elf64 strlen.s -Wall -Ox
;; gcc -shared strlen.o -o libasm.so
;; gcc main.c -L./-lasm -fno-builtin
;; LD_LIBRARY_PATH=$(pwd) LD_PRELOAD=./libasm.so ./a.out
 */ 
