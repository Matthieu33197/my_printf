/*
** EPITECH PROJECT, 2019
** put nbr unsigned
** File description:
** print unsigned nbr
*/

#include "my.h"

void my_put_nbr_usigned(unsigned int nb)
{
    if (nb < 10) {
        my_putchar(nb + '0');
    } else {
        my_put_nbr_usigned(nb/10);
        my_put_nbr_usigned(nb%10);
    }
}
