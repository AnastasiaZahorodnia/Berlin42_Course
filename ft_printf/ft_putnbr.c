/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:18:37 by anzahoro          #+#    #+#             */
/*   Updated: 2025/01/21 21:39:01 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_recursive(int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_putnbr_recursive(n / 10); 
	}
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putchar('2'); 
		n = 147483648;
	}
	else if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	count += ft_putnbr_recursive(n);
	return (count);
}
