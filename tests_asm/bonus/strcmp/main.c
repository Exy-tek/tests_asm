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
    printf("\n-------------STRCMP-------------\n");
    printf("OK = %d\n", strcmp("Test test", "Test test"));
    printf("same length (5) = %d\n", strcmp("Test tetx", "Test tets"));
    printf("Result (-18) < = %d\n", strcmp("String hello word", "String2"));
    printf("Result (32) > = %d\n", strcmp("hello world", "hello"));

   return 0;
}