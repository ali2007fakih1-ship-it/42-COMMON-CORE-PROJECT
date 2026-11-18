#include <stdio.h>

int ft_strncmp(const char *str ,const char *str1 , size_t n)
{
    size_t i;
    
    i = 0;
    while ((str[i]  || str1[i] ) && i < n)
    {
        if (str[i] != str1[i])
        {
            return (unsigned char)str[i] - (unsigned char)str1[i];
        }
        i++;
    }
    return 0;
}
