/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:43:57 by anzahoro          #+#    #+#             */
/*   Updated: 2024/12/04 19:13:39 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dst;
	char	*s;

	dst = (char *)dest;
	s = (char *)src;
	if (dest == src)
		return (dest);
	if (s < dst)
	{
		while (len--)
			*(dst + len) = *(s + len);
	}
	else
	{
		while (len--)
			*dst++ = *s++;
	}
	return (dest);
}
