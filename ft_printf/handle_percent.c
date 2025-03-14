#include "ft_printf.h"

int handle_percent(void)
{
    write(1, "%", 1);
    return 1;
}
