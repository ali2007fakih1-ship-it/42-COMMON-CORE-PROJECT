#include <stdio.h>
#include <stdlib.h>
char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    size_t k;
    char *ptr;
    char *str;
    size_t len1;
    i = 0;
    j = 0;
    k = 0;

    if(s == NULL)
    {
        return NULL;
    }
    while (s[i] != '\0')
    {
        i++;
    }
    len1 = i - start;
    if (start >= i )
    {
        str = (malloc(1));
        if(str == NULL)
        {
            return NULL;
        }
        str[j] = '\0'; 
        return str;
    }
    if (len1 > len)
    {ptr = (malloc(sizeof (char) * (len + 1) ));}
    else{ptr = (malloc(sizeof (char) * (len1 + 1) ));}

    if(ptr == NULL)
    {
        return NULL;
    }
    while (k < len && s[start] != '\0')
    {
        ptr[j] = s[start] ;
        j ++;
        start ++;
        k++;  
    }
    ptr[j] = '\0';
    return ptr;
}

int main()
{
    char *s = "alifa";

    // Extract two characters starting from index 3
    char *sub = ft_strsub(s,2, 3);
    printf("%s",sub);
}