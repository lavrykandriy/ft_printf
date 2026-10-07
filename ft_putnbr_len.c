#include "ft_printf.h"

int ft_putnbr_len(int n)
{
    int count;
    long    num;

    count = 0;
    num = n;
    if (num < 0)
    {
        count += ft_putchar_len('-');
        num = -num;
    }
    if (num < 10)
        count += ft_putchar_len(num + 48);
    else if (num > 9)
    {
        count += ft_putnbr_len((int)(num / 10));
        count += ft_putchar_len(num % 10 + 48);
    }
    return (count);
}
