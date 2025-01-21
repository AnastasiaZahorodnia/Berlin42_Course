/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:56:35 by anzahoro          #+#    #+#             */
/*   Updated: 2024/11/27 20:55:35 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_issep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

static int	ft_countwords(char *str, char sep)
{
	int	neww;
	int	c;

	c = 0;
	neww = 0;
	while (*str)
	{
		if (ft_issep(*str, sep) == 0 && neww == 0)
		{
			neww = 1;
			c++;
		}
		else if (ft_issep(*str, sep) == 1 && neww == 1)
			neww = 0;
		str++;
	}
	return (c);
}

static char	*ft_str(char *s, char c)
{
	int		i;
	char	*str;
	int		j;

	i = 0;
	j = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (0);
	while (j < i)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_free(int i, char **str)
{
	while (i >= 0 && str[i])
		free(str[i--]);
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		len;
	int		i;

	i = 0;
	len = ft_countwords((char *)s, c);
	str = malloc((len + 1) * sizeof(char *));
	if (!str)
		return (0);
	while (*s)
	{
		if (ft_issep(*s, c) == 0)
		{
			str[i] = ft_str((char *)s, c);
			if (!str[i])
				return (ft_free(--i, str));
			i++;
			while (!ft_issep(*s, c) && *s)
				s++;
		}
		else
			s++;
	}
	str[i] = 0;
	return (str);
}

// int	main(void)
// {
// 	char **strs = ft_split("     45 6 --  ,,   < Hello world", ' ');
// 	while (*strs)
// 	{
// 		printf("%s\n", *strs);
// 		strs++;
// 	}
// }