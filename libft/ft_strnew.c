#include <stdio.h>
#include <stdlib.h>

char * ft_strnew(size_t size)
{
    size_t i;
    i = 0;
    char *ptr;
    ptr = malloc (size + 1);
    if(ptr == NULL)
    {
        return NULL;
    }
    while (ptr !=NULL && i <= size)
    {
        ptr[i]='\0';
        i++;
    }
    return ptr;
}