/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** revstr
*/

#include "my.h"
#include <stdlib.h>

char *my_revstr(char *str)
{
    char *str2 = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = my_strlen(str) - 1;
    int j = 0;

    while (i >= 0) {
        str2[j] = str[i];
        i--;
        j++;
    }
    str2[j] = '\0';
    return (str2);
}
