/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:22:41 by anzahoro          #+#    #+#             */
/*   Updated: 2025/01/21 20:58:45 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_handle_format(*format, args);
		}
		else
		{
			count += ft_putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	int		ret1;
	int		ret2;
	void	*ptr;

	ret1 = ft_printf("Custom ft_printf: %c\n", 'A');
	ret2 = printf("Original printf: %c\n", 'A');
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);
	ret1 = ft_printf("Custom ft_printf: %s\n", "Hello, 42!");
	ret2 = printf("Original printf: %s\n", "Hello, 42!");
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);
	ret1 = ft_printf("Custom ft_printf: %d %i\n", 42, -42);
	ret2 = printf("Original printf: %d %i\n", 42, -42);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);
	ret1 = ft_printf("Custom ft_printf: %u\n", 123456789);
	ret2 = printf("Original printf: %u\n", 123456789);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);
	ret1 = ft_printf("Custom ft_printf: %x\n", 255);
	ret2 = printf("Original printf: %x\n", 255);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);
	ret1 = ft_printf("Custom ft_printf: %X\n", 255);
	ret2 = printf("Original printf: %X\n", 255);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);
	ptr = &ret1;
	ret1 = ft_printf("Custom ft_printf: %p\n", ptr);
	ret2 = printf("Original printf: %p\n", ptr);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);
	ret1 = ft_printf("Custom ft_printf: %%\n");
	ret2 = printf("Original printf: %%\n");
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);
	return (0);
}
