#include <stdio.h>
#include <string.h>



void *ft_memmove(void *dest,const void *src, size_t n)
{
    unsigned char *dst = dest;
    const unsigned char *sc = src;
    long unsigned int i;
    i = 0;
    if (dst > sc && dst <sc + n)
    {
        while (n > 0)
        {
            dst[n-1]= sc[n-1];
            n--;
        }
    }
    else
    {
        while (i < n)
        {
            dst[i]=sc[i];
            i++;
        }
    }
    return dst;
}

int main()
{
    char str1[100] = "Alifakih313@@";
    char str2[100] = "Learningisfun1";

    printf("Original string (str1) : %s\n", str1);
    printf("Original string (str2) : %s\n", str2);

    // Using memmove on second independent copy
    ft_memmove(str2+ 8, str1, 10);
    printf("memmove overlap : %s\n", str2);

    return 0;
}