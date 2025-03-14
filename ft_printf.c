#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
                count += handle_char(args);
            else if (*format == 's')
                count += handle_string(args);
            else if (*format == 'd' || *format == 'i')
                count += handle_int(args);
            else if (*format == 'u')
                count += handle_unsigned(args);
            else if (*format == 'x')
                count += handle_hex(args, 0);
            else if (*format == 'X')
                count += handle_hex(args, 1);
            else if (*format == 'p')
                count += handle_pointer(args);
            else if (*format == '%')
                count += handle_percent();
            format++;
        }
        else
        {
            write(1, format++, 1);
            count++;
        }
    }
    va_end(args);
    return count;
}