#include <string.h>
#include <stdio.h>

int ft_memcmp(const void  *str1 , const void *str2, size_t n)
{
    const unsigned char *st1 = str1;
    const unsigned char *st2 = str2;
    long unsigned int i;
    i = 0;
    while (i < n)
    {
        if (st1[i] != st2[i])
        {
            return (st1[i] - st2[i]);
        }
        i++;
    }
    return 0;
}

int main ()
{
    char str[50]="hello ali";
    char str1[50]="hello ali";
    int result = ft_memcmp(str , str1,5);
    if(result == 0)
    {
        printf ("is equal");
    }
    else  {
        printf ("isnot equal");
    }
    return 0;
}