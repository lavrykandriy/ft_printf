#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_printf(char const *format, ...);
int ft_putchar_len(char c);
int ft_putstr_len(char *s);
int ft_putnbr_len(int n);
int ft_putuint_len(unsigned int n);
int ft_puthex_len(unsigned long long num, char format);
int ft_putptr_len(void *ptr);

#endif // FT_PRINTF_H
