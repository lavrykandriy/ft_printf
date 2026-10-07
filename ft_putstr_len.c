#include "ft_printf.h"

int ft_putstr_len(char *s)
{
    int len;

    if (!s)
        return (ft_putstr_len("(null)"));
    len = 0;
    while (s[len])
    {
        write(1, &s[len], 1);
        len++;
    }
    return (len);
}
