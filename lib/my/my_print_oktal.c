/*
** EPITECH PROJECT, 2019
** print octal number
** File description:
** print octal number
*/

#include "my.h"

void my_print_oktal(char *str)
{
    int i = 0;
    
    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] == 127){
            my_putchar('\\');
            my_print_octal(str[i]);
        } else
            my_putchar(str[i]);
        i++;
    }
}
