/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:18:41 by anzahoro          #+#    #+#             */
/*   Updated: 2025/01/21 19:17:42 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long long	address;
	int					count;

	count = 0;
	address = (unsigned long long)ptr;
	count += ft_putstr("0x");
	count += ft_puthex(address, 0);
	return (count);
}
