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

char *ft_strdup(const char *str)
{
    size_t i;
    char *ptr;
    size_t len1 ;

    len1 = ft_strlen(str) + 1;
    i = 0;
    ptr = malloc(sizeof(char) * len1);
    if (ptr == NULL)
    {
        return NULL;
    }
    while (i < len1)
    {
        ptr[i] = str[i];
        i++;
    }
    return ptr;
}

#include<string.h>

int main()
{
    char source[] = "GeeksForGeeks";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = ft_strdup(source); 

    printf("%s", target);
    return 0;
}