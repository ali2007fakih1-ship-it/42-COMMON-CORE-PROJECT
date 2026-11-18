#include <stdio.h>
#include <stdlib.h>

char * ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int z;
    char *ptr;

    i = 0;
    j = 0;
    z = 0;

    if(s1 == NULL || s2 == NULL)
    {
        return NULL;
    }
    while (s1[i] != '\0')
    {
        i++;
    }
    while (s2[j] != '\0')
    {
        j++;
    }
    ptr = malloc(sizeof(char) * (i + j)+1);
    if (ptr == NULL)
    {
        return NULL;
    }
    i = 0;
    while (s1[i] != '\0')
    {
        ptr[z]=s1[i];
        i++;
        z++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        ptr[z]=s2[j];
        j++;
        z++;
    }
    ptr[z]='\0';
    return ptr;
}