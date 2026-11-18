#include <stdio.h>
#include <string.h>



void *ft_memcpy(void *dest , void *src, size_t n )
{
    long unsigned int i;
    unsigned char *dst = dest;
    unsigned char *sc = src;
    i = 0;
    
    while (i < n)
    {
        dst[i]=sc[i];
        i++;
    }
    return dst;
}

int main() {
    char str1[50] = "hello";
    char str2[30] = "ali";

    // Copies contents of str1 to str2
    ft_memcpy(str2, str1, sizeof(str1));

    printf("str2 after memcpy:");
    printf("%s",str2);

    return 0;
}