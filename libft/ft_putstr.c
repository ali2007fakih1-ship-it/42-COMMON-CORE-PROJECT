#include <unistd.h>

void ft_putstr(char const *s )
{
    int i;
    i = 0;
    if (!s) return;
    while (s[i] != '\0')
    {
        i++;
    }
    write(1, s,i);
}
int main ()
{
    char *s = "ali";
    ft_putstr(s);
}