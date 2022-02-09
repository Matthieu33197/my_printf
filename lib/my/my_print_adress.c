/*
** EPITECH PROJECT, 2019
** print adress
** File description:
** print adress
*/

#include "my.h"
#include <stdlib.h>

void my_print_adress(unsigned int adress)
{
    if (adress == 0) {
        my_putstr("(nil)");
        return;
    }
    my_putchar('0');
    my_putchar('x');
    my_print_hexa_min(adress);
}
