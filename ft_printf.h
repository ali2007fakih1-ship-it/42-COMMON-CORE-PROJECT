#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <unistd.h>

int				ft_printf(char const *str, ...);
int ft_put_ptr_num_helper(unsigned long long n);
int ft_put_hex_nbr(unsigned int n);
int ft_putnbr(int n);
int ft_putchar(char c);
int ft_putstr(char const *s );
int ft_put_HEX_nbr(unsigned int n);
int ft_putnbri(unsigned int n);
int ft_put_ptr_num(void *ptr);

#endif