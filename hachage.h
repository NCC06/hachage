#include <stdio.h>
#include <stdlib.h>

int ft_haching(char *chaine)
{
    int i = 0;
    int number_haching = 0;

    while (chaine[i] != '\0')
    {
        number_haching += chaine[i];
        i++;
    }
    number_haching %= 100;

    return number_haching;
}
