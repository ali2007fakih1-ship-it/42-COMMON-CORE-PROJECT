
char *ft_strcpy(char *dest , const char *src)
{
    int i;
    i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i]='\0';
    return dest;
}

#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello, Geeks!";
  
    // Ensure destination has enough space
    char s2[50];  

    // Copying string using strcpy
    ft_strcpy(s2, s1);

    printf("%s", s2);
    return 0;
}