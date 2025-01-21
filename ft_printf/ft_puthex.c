/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:18:33 by anzahoro          #+#    #+#             */
/*   Updated: 2025/01/21 19:17:31 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex_recursive(unsigned int n, int uppercase)
{
	if (n >= 16)
	{
		ft_puthex_recursive(n / 16, uppercase);
	}
	if (uppercase)
	{
		ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	else
	{
		ft_putchar("0123456789abcdef"[n % 16]);
	}
}

int	ft_puthex(unsigned int n, int uppercase)
{
	ft_puthex_recursive(n, uppercase);
	return (0);
}
