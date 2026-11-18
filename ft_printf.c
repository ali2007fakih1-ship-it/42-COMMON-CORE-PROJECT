#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <unistd.h>
#include <unistd.h>

int ft_put_ptr_num_helper(unsigned long long n);
int ft_put_hex_nbr(unsigned int n);
int ft_putnbr(int n);
int ft_putchar(char c);
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


int ft_printf(const char *f, ...)
{
    int i = 0;
    int count = 0;
    va_list str;
    va_start(str,f);
    while(f[i] !='\0')
    {
        if (f[i] == '%' && f[i+1] == 's')
        {
            i++;
            count += ft_putstr(va_arg(str,char*));
        }
        else if(f[i] == '%' && f[i+1] == 'd')
        {
            i++;
            count += ft_putnbr(va_arg(str,int));
        }
        else if(f[i] == '%' && f[i+1] == 'i')
        {
            i++;
            count += ft_putnbr(va_arg(str,int));
        }
        else if (f[i] == '%' && f[i+1] == 'c')
        {
            i++;
            count += ft_putchar(va_arg(str,int));
        }
        else if (f[i] == '%' && f[i+1] == 'x')
        {
            i++;
            count += ft_put_hex_nbr(va_arg(str,unsigned int));

        }
        else if (f[i] == '%' && f[i+1] == 'u')
        {
            i++;
            count += ft_putnbri(va_arg(str,unsigned int));

        }
        else if (f[i] == '%' && f[i+1] == 'X')
        {
            i++;
            count += ft_put_HEX_nbr(va_arg(str,unsigned int));

        }
        else if (f[i] == '%' && f[i+1] == 'p')
        {
            i++;
            count += ft_put_ptr_num(va_arg(str,void *));

        }
        else if (f[i] == '%' && f[i+1] == '%')
        {
            i++;
            count += ft_putchar('%');

        }
        else
        {
            count += ft_putchar(f[i]);
        }
        
        i++;
    }
    va_end(str);
    return (count);
}

#include <stdio.h>

int ft_printf(const char *f, ...);

int main() {
    
    ft_printf("ali%u");
    
    return 0;
}