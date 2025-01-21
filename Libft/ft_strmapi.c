/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:37:23 by anzahoro          #+#    #+#             */
/*   Updated: 2024/11/27 23:56:34 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char ft_char(unsigned int a, char c);
// return (a + c);
// char ft_char_dup(unsigned int a, char c);
// return (a * c);
// void test(char (*func)(unsigned int, char c))
// void(&ft_char)
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	n;
	char	*str;
	size_t	i;

	i = 0;
	n = ft_strlen(s);
	str = malloc((n + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
