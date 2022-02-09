/*
** EPITECH PROJECT, 2019
** print_binary
** File description:
** convert decimal base to binary base and print
*/

#include "my.h"

void my_print_binary(unsigned int decimal)
{
    unsigned int temp = 0;
    unsigned int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    i -= 1;
    while (i >= 0) {
    my_put_nbr(binary[i]);
    i--;
    }
}
