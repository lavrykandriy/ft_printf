#include "ft_printf.h"

static int  ft_putptr_hex(unsigned long long num)
{
    int count;
    char    *base;

    count = 0;
    base = "0123456789abcdef";
    if (num >= 16)
        count += ft_putptr_hex(num / 16);
    count += ft_putchar_len(base[num % 16]);
    return (count);
}

int ft_putptr_len(void *ptr)
{
    int count;
    unsigned long long  address;

    if (!ptr)
        return (ft_putstr_len("(nil)"));
    count = 0;
    address = (unsigned long long)ptr;
    count += ft_putstr_len("0x");
    count += ft_putptr_hex(address);
    return (count);

}
