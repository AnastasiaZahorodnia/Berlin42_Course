#include "ft_printf.h"

int handle_string(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    if (!str)
        str = "(null)";
    while (*str)
    {
        write(1, str++, 1);
        count++;
    }
    return count;
}