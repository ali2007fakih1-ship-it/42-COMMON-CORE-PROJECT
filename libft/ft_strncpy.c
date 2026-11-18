#include <stdio.h>

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

char *ft_strncpy(char *dest , const char *src,size_t n)
{
    size_t i;
    size_t s;

    i = 0;
    s = ft_strlen(src);

    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    if (s < n)
    {
        while (i < n)
        {
            dest[i]='\0';
            i++;
        }
    }
    return dest;
}

#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "GeeksforGeeks";
    char destination[5];

    ft_strncpy(destination, source, 10);
    destination[5] = '\0';   // Null-terminate the copied string

    printf("Copied string: %s\n", destination);

    return 0;
}