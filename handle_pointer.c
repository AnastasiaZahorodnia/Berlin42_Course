#include "ft_printf.h"

int handle_pointer(va_list args)
{
    void *ptr = va_arg(args, void *);
    unsigned long addr = (unsigned long)ptr;
    char buffer[20];
    int len = 0;
    const char *digits = "0123456789abcdef";

    if (addr == 0)
    {
        write(1, "0x0", 3);
        return 3;
    }

    write(1, "0x", 2);
    len += 2;

    while (addr > 0)
    {
        buffer[len++] = digits[addr % 16];
        addr /= 16;
    }

    while (len > 2)
    {
        write(1, &buffer[--len], 1);
    }

    return len;
}