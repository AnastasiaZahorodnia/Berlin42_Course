#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int handle_char(va_list args);
int handle_string(va_list args);
int handle_int(va_list args);
int handle_unsigned(va_list args);
int handle_hex(va_list args, int uppercase);
int handle_pointer(va_list args);
int handle_percent(void);
int ft_printf(const char *format, ...);

#endif