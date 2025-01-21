/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:56:56 by anzahoro          #+#    #+#             */
/*   Updated: 2024/12/04 19:12:42 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (find[0] == '\0')
		return ((char *) s);
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i + j] == find[j] && (i + j) < slen)
		{
			if (find[j] == '\0' && s[i + j] == '\0')
				return ((char *) &s[i]);
			j++;
		}
		if (find[j] == '\0')
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
