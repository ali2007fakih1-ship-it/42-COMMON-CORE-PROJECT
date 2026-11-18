#include <stdio.h>
#include <stdlib.h>

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

char * ft_strmap(char const *s, char (*f)(char))
{
    int i;
    char *str;
    size_t len1;
    i = 0;
    if (s == NULL)
    {
        return NULL;
    }
    len1 = ft_strlen(s);
    str = malloc(sizeof (char) * (len1+1));
    if (str == NULL)
    {
        return NULL;
    }
    while (s[i] != '\0')
    {
        str[i] = f((s[i]));
        i ++;
    }
    str[i] = '\0';
    return str;
}