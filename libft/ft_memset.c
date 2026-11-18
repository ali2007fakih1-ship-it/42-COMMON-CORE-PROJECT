#include <stdio.h>

void *ft_memset(void *str , int c , size_t n)
{
    long unsigned int i;
    i = 0;
    unsigned char *st = str; 
    while (i != n)
    {
        st[i] = (unsigned char)c;
        i++;
    }
    return str;
}

int main ()
{

 char str[50] = "GeeksForGeeks ali hassan fakih 313@";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str, 'h', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;

}