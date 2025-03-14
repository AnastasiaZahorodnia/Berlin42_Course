#include "ft_printf.h"

int handle_char(va_list args)
{
    char c = va_arg(args, int);
    write(1, &c, 1);
    return 1;
}