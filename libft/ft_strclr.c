#include <stdio.h>

void ft_strclr(char *s)
{
    int i;
    int j;
    j = 0;
    i = 0;
    if (s == NULL)
    {
        return;
    }
    while (s[i] != '\0')
    {
        s[i] = '\0';
        i++;
    }
}
