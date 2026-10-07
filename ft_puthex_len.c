#include "ft_printf.h"

int ft_puthex_len(unsigned long long num, char specifier)
{
    int count;
    char *base;

    count = 0;
    if (specifier == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";

    if (num >= 16)
        count += ft_puthex_len(num / 16, specifier);
    count += ft_putchar_len(base[num % 16]);
    return (count);

}
