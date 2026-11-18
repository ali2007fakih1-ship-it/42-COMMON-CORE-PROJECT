#include <stdio.h>
size_t strlcat(char *dst, const char *src, size_t size)
{
    size_t dest_len;
    size_t src_len;
    size_t z;
    size_t k;

    dest_len = 0;
    src_len = 0;
    k = 0;
    z = 0;
    while(dst[dest_len] != '\0')
    {
        dest_len ++;
        k++;
    }
     while(src[src_len] != '\0')
    {
        z++;
        src_len ++;
    }
    if (dest_len >= size)
    {
        return (src_len + size);
    }
    src_len = 0;
    while (src[src_len]!= '\0' && src_len+1+dest_len < size)
    {
        dst[dest_len]=src[src_len];
        dest_len++;
        src_len++;
    }
    dst[dest_len] = '\0';
    return z+k;
}