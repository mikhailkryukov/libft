#include"header.h"

void ft_putstr(char const *s)
{
    int count;

    count = 0;
    while (s[count] != '\0')
    {
        ft_putchar(s[count]);
        count++;
    }
}
