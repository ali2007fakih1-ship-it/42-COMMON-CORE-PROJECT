#include <stdio.h>

void *ft_memchr(const void *s,int c,size_t n)
{
    long unsigned int i;
    i = 0;
    const unsigned char *sr=s;
    unsigned char tar= c;
    while(i < n)
    {
        if (sr[i] == tar)
        {
            return ((void *)&sr[i]);
        }
        i++;
    } 
    return NULL;
}

int main() {
    char data[] = "Hello, World!";
    char *result;
    char target = 'z';

    // Search for 'W' in first 13 bytes
    result = ft_memchr(data, target, 13);

    if (result != NULL) {
        printf("Found '%c' at position %ld\n", target, result - data);
    } else {
        printf("Character '%c' not found\n", target);
    }

    return 0;
}