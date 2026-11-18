#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main (void)
{
    char str[50] = "hello ali";
    printf("%d",ft_strlen(str));
}