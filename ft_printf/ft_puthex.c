/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:18:33 by anzahoro          #+#    #+#             */
/*   Updated: 2025/01/21 21:57:35 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int uppercase)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16, uppercase);
	if (uppercase)
		count += ft_putchar("0123456789ABCDEF"[n % 16]);
	else
		count += ft_putchar("0123456789abcdef"[n % 16]);
	return (count);
}
