#include "ft_printf.h"

int ft_putuint_len(unsigned int n)
{
    int count;

    count = 0;
    if (n >= 10)
        count += ft_putuint_len(n / 10);

    count += ft_putchar_len((n % 10) + '0');
    return (count);
}
