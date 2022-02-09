/*
** EPITECH PROJECT, 2019
** print_hexa
** File description:
** convert decimal base to hexa base and print
*/

#include "my.h"
#include <stdlib.h>

void my_print_hexa_maj(unsigned int decimal)
{
    char *hexa = malloc(sizeof(char) * (my_intlen(decimal) + 1));;
    int i = 0;
    unsigned int temp = 0;

    while (decimal > 0) {
        temp = decimal % 16;
        if (temp < 10) {
            hexa[i] = temp + 48;
            i++;
        } else {
            hexa[i] = temp + 55;
            i++;
        }
        decimal /= 16;
    }
    hexa[i] = '\0';
    my_putstr(my_revstr(hexa));
}
