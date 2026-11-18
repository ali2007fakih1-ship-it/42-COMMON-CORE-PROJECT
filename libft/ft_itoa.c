#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int intlen(int n)
{
    int z;
    long i;
    i = n;
    z = 0;
    if (i == 0)
    {
        return 1;
    }
    if (i<0)
    {
        i = i *(-1);
    }
    while(i > 0)
    {
        i = i/10;
        z++;
    }
    return (z);
}

char * ft_itoa(int n)
{
    char *ptr;
    long nb;
    int i;
    int z;
    i = 0;
    z = intlen(n);
    nb = n;    
    if(nb < 0)
    {
        z = z +1;
        ptr = malloc(sizeof(char) * z + 1);
        if (ptr == NULL)
        {
            return NULL;
        }
        ptr[0] = '-';
        nb = nb *(-1);
    }
    else 
    {
        ptr = malloc(sizeof(char) * z + 1);
        if (ptr == NULL)
        {
            return NULL;
        }
    }
    i = z;
    while(nb > 9 && z > 1)
    {
        ptr[z-1] =((nb % 10)+ '0');
        nb = nb / 10;
        z--;
    }
    ptr[z-1] = ((nb % 10)+ '0') ;
    ptr[i] = '\0';
    return ptr;
}

int main()
{
    printf("%s",ft_itoa(1234));
}