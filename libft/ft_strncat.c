#include <stdio.h>
#include <string.h>

char *ft_strncat(char *s1 , const char *s2 , size_t n)
{
    size_t i;
    size_t j;
    
    i = 0;
    while(s1[i] != '\0')
    {
        i ++;
    }
    j = 0;
    while (s2[j] != '\0' && j < n)
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return s1;
}

int main(void)
{
    char s1[]="ali";
    char s2[]="fakih";
    char *s = ft_strncat(s1,s2,2);
    printf("%s\n",s);
    
}