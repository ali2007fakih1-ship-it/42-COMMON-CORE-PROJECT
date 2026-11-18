#include "libft.h"
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

 char *ft_strchr(const char *s, int c)
 {
    int i;
    i = 0;
   
    while (s[i] != '\0')
    {
        if(s[i] == c)
        {
            return((char *)&s[i]);
        }
        i++;
    }
    if (c == '\0')
    {
        return((char *)&s[i]);
    }
    return NULL;
 }


char *ft_strrchr(const char *s, int c)
{
    int i;
    i = 0;

    while (s[i] != '\0')
    {
        i ++;
    }
    if (c == '\0')
    {
        return((char *)&s[i]);
    }
   
    while (i >=1 && s[i-1] != '\0')
    {
        if(s[i-1] == c) 
        {
            return((char *)&s[i-1]);
        }
        i--;
    }
    
    return NULL;
}


char	*ft_strtrim(const char *str, const char *set)
{
    int i;
    int s;
    int j;
    int r;
    s = 0;
    char *ptr;
    if (str == NULL)
    {
        return NULL;
    }
    if (set == NULL)
    {
        return (char*) str;
    }
    r = 0;
    while(ft_strchr(set, str[r]) != NULL && str[r] != '\0')
    {
        r++;
    }
    j = ft_strlen(str);
    while (ft_strchr(set,str[j-1]) != NULL && j > 0)
    {
        j--;
    }
    i = 0;
    if (r >= j)
    {
        ptr = malloc(1);
        ptr[i] = '\0';
        return ptr;
    }
    s = j - r;

    ptr = malloc(sizeof(char) * s + 1);
    if (ptr == NULL)
    {
        return NULL;
    }
    i = 0;
    while(r < j)
    {
        ptr[i] = str[r];
        r++;
        i++;
    }
    ptr [i] = '\0';
    return ptr;

}

int main ()
{
    char s[] = "aaab";
    char set[] = "a";
    char *se = ft_strtrim(s,set);
    printf("%s",se);
}