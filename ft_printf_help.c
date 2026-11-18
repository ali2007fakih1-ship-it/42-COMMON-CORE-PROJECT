#include "ft_printf.h"

int ft_putstr(char const *s )
{
    int i;
    i = 0;
    if (!s) return 0;
    while (s[i] != '\0')
    {
        i++;
    }
    write(1, s,i);
    return i;
}

int ft_put_ptr_num(void *ptr)
{
    int count;
    unsigned long long ptr1;
    count = 0;
    if( !ptr)
    {
        return (ft_putstr("(nil)"));
       
    }
    count += ft_putstr("0x");
    ptr1 = (unsigned long long)ptr;
    count += ft_put_ptr_num_helper(ptr1);
    return count;
}


int ft_put_ptr_num_helper(unsigned long long n)
{
    int count;
    // unsigned long long n = ptr;
    count = 0 ;
    char*hex;
    hex = ("0123456789abcdef");
   
    if (n > 15)
    {
        count += ft_put_ptr_num_helper(n / 16);
    }
    count += ft_putchar(hex[(n % 16)]);
    return count;
}

int ft_putchar(char c)
{
    return write(1,&c,1);
}

int ft_putnbr(int n)
{
    long nb;
    int count;
    count = 0 ;
    nb = n;
    if (nb < 0)
    {
        count += ft_putchar('-');
        nb = nb * (-1);
    }
    if (nb > 9)
    {
        count += ft_putnbr(nb / 10);
    }
    count += ft_putchar((nb % 10) + '0');
    return count;
}

int ft_putnbri(unsigned int n)
{
    int count;
    count = 0 ;
    if (n > 9)
    {
        count += ft_putnbri(n / 10);
    }
    count += ft_putchar((n % 10) + '0');
    return count;
}



int ft_put_hex_nbr(unsigned int n)
{
    int count;
    count = 0 ;
    char *hex;
    hex = "0123456789abcdef";
    if (n > 15)
    {
        count +=  ft_put_hex_nbr(n / 16);
    }
    count += ft_putchar(hex[(n % 16)]);
    return count;
}

int ft_put_HEX_nbr(unsigned int n)
{
    int count;
    count = 0 ;
    char *hex;
    hex = "0123456789ABCDEF";
    if (n > 15)
    {
        count +=  ft_put_HEX_nbr(n / 16);
    }
    count += ft_putchar(hex[(n % 16)]);
    return count;
}
