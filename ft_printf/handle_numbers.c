#include "ft_printf.h"

int ft_putnbr_base(unsigned long nbr, char *base)
{
    char result[33];
    int i = 0;
    int count = 0;

    if (nbr == 0)
    {
        write(1, &base[0], 1);
        return 1;
    }

    while (nbr > 0)
    {
        result[i++] = base[nbr % 16];
        nbr /= 16;
        count++;
    }

    while (--i >= 0)
        write(1, &result[i], 1);

    return count;
}

int handle_int(va_list args)
{
    int num = va_arg(args, int);
    char buffer[12];
    int len = 0;
    int temp = num;

    if (temp == 0)
    {
        write(1, "0", 1);
        return 1;
    }

    if (temp < 0)
    {
        write(1, "-", 1);
        len++;
        temp = -temp;
    }

    while (temp > 0)
    {
        buffer[len++] = (temp % 10) + '0';
        temp /= 10;
    }

    while (len > 0)
    {
        write(1, &buffer[--len], 1);
    }

    return len;
}

int handle_unsigned(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char buffer[12];
    int len = 0;
    unsigned int temp = num;

    if (temp == 0)
    {
        write(1, "0", 1);
        return 1;
    }

    while (temp > 0)
    {
        buffer[len++] = (temp % 10) + '0';
        temp /= 10;
    }

    while (len > 0)
    {
        write(1, &buffer[--len], 1);
    }

    return len;
}

int handle_hex(va_list args, int uppercase)
{
    unsigned int num = va_arg(args, unsigned int);
    char buffer[12];
    int len = 0;
    unsigned int temp = num;
    const char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

    if (temp == 0)
    {
        write(1, "0", 1);
        return 1;
    }

    while (temp > 0)
    {
        buffer[len++] = digits[temp % 16];
        temp /= 16;
    }

    while (len > 0)
    {
        write(1, &buffer[--len], 1);
    }

    return len;
}

