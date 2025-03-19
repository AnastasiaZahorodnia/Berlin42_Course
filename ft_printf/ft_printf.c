/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:55:32 by anzahoro          #+#    #+#             */
/*   Updated: 2025/03/19 18:48:54 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;

	printed = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			printed += handle_format(*(++format), args);
		else
			printed += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (printed);
}
/*
int	main(void)
{
	int	ft_ret;
	int	std_ret;
	int	a;

	a = 42;
	ft_ret = ft_printf("ft_printf: %c\n", 'A');
	std_ret = printf("printf:    %c\n", 'A');
	printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
	ft_ret = ft_printf("ft_printf: %s\n", "Hello, world!");
	std_ret = printf("printf:    %s\n", "Hello, world!");
	printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
	ft_ret = ft_printf("ft_printf: %p\n", &a);
	std_ret = printf("printf:    %p\n", &a);
	printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
	ft_ret = ft_printf("ft_printf: %d\n", -12345);
	std_ret = printf("printf:    %d\n", -12345);
	printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
	ft_ret = ft_printf("ft_printf: %i\n", 67890);
	std_ret = printf("printf:    %i\n", 67890);
	printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
	ft_ret = ft_printf("ft_printf: %u\n", 4294967295u);
	std_ret = printf("printf:    %u\n", 4294967295u);
	printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
	ft_ret = ft_printf("ft_printf: %x\n", 255);
	std_ret = printf("printf:    %x\n", 255);
	printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
	ft_ret = ft_printf("ft_printf: %X\n", 255);
	std_ret = printf("printf:    %X\n", 255);
	printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
	ft_ret = ft_printf("ft_printf: %%\n");
	std_ret = printf("printf:    %%\n");
	printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);
	return (0);
}
*/