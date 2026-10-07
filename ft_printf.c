#include "ft_printf.h"

static int ft_format_eval(char specifier, va_list args)
{
    int count;

    count = 0;
    if (specifier == 'c')
        count += ft_putchar_len(va_arg(args, int));
    else if (specifier == 's')
        count += ft_putstr_len(va_arg(args, char *));
    else if (specifier == 'd' || specifier == 'i')
        count += ft_putnbr_len(va_arg(args, int));
    else if (specifier == 'u')
        count += ft_putuint_len(va_arg(args, unsigned int));
    else if (specifier == 'x' || specifier == 'X')
        count += ft_puthex_len(va_arg(args, unsigned int), specifier);
    else if (specifier == 'p')
        count += ft_putptr_len(va_arg(args, void *));
    else if (specifier == '%')
        count += ft_putchar_len('%');
    return (count);
}

int ft_printf(char const *format, ...)
{
    va_list args;
    int i;
    int total_len;

    i = 0;
    total_len = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            total_len += ft_format_eval(format[i], args);
        }
        else
            total_len += ft_putchar_len(format[i]);
        i++;
    }
    va_end(args);
    return (total_len);
}
