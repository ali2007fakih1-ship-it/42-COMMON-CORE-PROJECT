#include <stdio.h>
#include <stdlib.h>
void * ft_memalloc(size_t size)
{
    size_t i;
    char *ptr;
    ptr = malloc(size);
    if (ptr == NULL)
    {
        return NULL;
    }
    i = 0;
    while( i < size)
    {
        ptr[i]= 0;
        i++;
    }
    return ptr;
}