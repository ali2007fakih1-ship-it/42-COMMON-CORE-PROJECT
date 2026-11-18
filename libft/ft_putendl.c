#include <unistd.h>
void ft_putendl(char const *s)
{
    int i;
    i = 0;
    if (s == NULL)
    {
        return ;
    }
    while (s[i] != '\0')
    {
        i++;
    }
     write(1,s, i);
    write(1,"\n",1);
}

int main()
{
    ft_putendl("hello");
}