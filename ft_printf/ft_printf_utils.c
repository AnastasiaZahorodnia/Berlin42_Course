/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:55:32 by anzahoro          #+#    #+#             */
/*   Updated: 2025/03/19 17:59:42 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[len])
		len += ft_putchar(s[len]);
	return (len);
}

int	ft_putnbr_base(long long nbr, char *base)
{
	int	count;
	int	base_len;

	count = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_len)
	{
		count += ft_putnbr_base(nbr / base_len, base);
	}
	return (count + ft_putchar(base[nbr % base_len]));
}
