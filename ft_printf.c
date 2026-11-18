#include "ft_printf.h"

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


int main() {
    
    ft_printf("ali\n");
    printf("ali");
    
    return 0;
}