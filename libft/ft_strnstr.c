#include <stdio.h>

char *ft_strnstr(const char  *src,char *tofind,size_t n)
{
    size_t i;
    size_t j;
    i = 0;
    j = 0;
    if(tofind[j] == '\0')
    {
        return src;
    }
    while(src[i] != '\0' && i < n)
    {
        j = 0;
            while (src[i+j] != '\0' && tofind[j] != '\0' && src[i+j] == tofind[j] && i+j < n)
            {
                j++;
            }
            if (tofind[j] == '\0')
            {
                return (&src[i]);
            }
            i++;
    }
    return 0;
}