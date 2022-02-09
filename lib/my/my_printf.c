/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** recode printf
*/

#include <stdarg.h>
#include "my.h"

void switch_3(va_list args, char *s, int i)
{
    switch (s[i]) {
    case 'p':
        my_print_adress(va_arg(args, int));
        break;
    case '%':
        my_putchar('%');
        break;
    case 'S':
        my_print_oktal(va_arg(args, char*));
        break;
    default:
        my_putchar('%');
        my_putchar(s[i]);
        break;
    }
}

void switch_2(va_list args, char *s, int i)
{
    switch (s[i]) {
    case 's':
        my_putstr(va_arg(args, char *));
        break;
    case 'u':
        my_put_nbr_usigned(va_arg(args, unsigned int));
        break;
    case 'o':
        my_print_octal(va_arg(args, int));
        break;
    case 'x':
        my_print_hexa_min(va_arg(args, int));
        break;
    case 'X':
        my_print_hexa_maj(va_arg(args, int));
        break;
    default:
        switch_3(args, s, i);
        break;
    }
}

int switch_(va_list args, char *s, int i)
{
    switch (s[i]) {
    case 'd':
        my_put_nbr(va_arg(args, int));
        break;
    case 'i':
        my_put_nbr(va_arg(args, int));
        break;
    case 'c':
        my_putchar((char)va_arg(args, int));
        break;
    case 'b':
        my_print_binary(va_arg(args, unsigned int));
        break;
    default:
        switch_2(args, s, i);
        break;
    }
    return (i);
}

int my_printf(char *s, ...)
{
    int i = 0;
    va_list args;
    va_start(args, s);

    while (s[i] != '\0') {
        if (s[i] == '%') {
            i = switch_(args, s, i + 1);
        } else
            my_putchar(s[i]);
        i++;
    }
    va_end(args);
    return (0);
}
