/*
** EPITECH PROJECT, 2019
** my_evil_str
** File description:
** reverse string
*/

#include <unistd.h>

void my_swp(char *x, char *y)
{
    char w = *x;
    char v = *y;

    *y = w;
    *x = v;

}

char *my_evil_str(char *str)
{
    int i = 0;
    int j = 0;
    
    while (str[i] != '\0')
        i++;
    i = i - 1;
    while (j <= i && str[j]) {
        my_swp(&str[j] ,&str[i]);
        j++;
        i--;
    }
    return (str);
}
