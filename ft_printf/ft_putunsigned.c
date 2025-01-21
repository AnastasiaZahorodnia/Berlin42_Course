/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:18:47 by anzahoro          #+#    #+#             */
/*   Updated: 2025/01/21 19:17:53 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunsigned_recursive(unsigned int n)
{
	if (n >= 10)
	{
		ft_putunsigned_recursive(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

int	ft_putunsigned(unsigned int n)
{
	ft_putunsigned_recursive(n);
	return (0);
}
