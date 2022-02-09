/*
** EPITECH PROJECT, 2019
** print octal
** File description:
** convert decimal to octal and print
*/

#include "my.h"

void my_print_octal(unsigned int decimal)
{
    int octal = 0;
    int i = 1;

    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    my_put_nbr_usigned(octal);
}
