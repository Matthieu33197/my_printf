;/*
** EPITECH PROJECT, 2019
** m_strcat
** File description:
** strcat
*/

int stri(char *dest)
{
    int u = 0;

    while (dest[u] != '\0') {
        u++;
    }
    return (u);
}

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j;

    j = stri(dest);
    while (src[i] != '\0') {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = '\0';
    return (dest);
}
