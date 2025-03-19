/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_formats.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:55:32 by anzahoro          #+#    #+#             */
/*   Updated: 2025/03/19 18:22:32 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(char spec, va_list args)
{
	int	c;

	if (spec == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (spec == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (spec == 'p')
	{
		c = ft_putstr("0x");
		c += ft_putnbr_base(va_arg(args, unsigned long), "0123456789abcdef");
		return (c);
	}
	if (spec == 'd' || spec == 'i')
		return (ft_putnbr_base(va_arg(args, int), "0123456789"));
	if (spec == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
	if (spec == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	if (spec == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	if (spec == '%')
		return (ft_putchar('%'));
	return (0);
}
