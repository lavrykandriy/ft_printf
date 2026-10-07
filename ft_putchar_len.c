#include "ft_printf.h"

int ft_putchar_len(char c)
{
    return (write(1, &c, 1));
}
