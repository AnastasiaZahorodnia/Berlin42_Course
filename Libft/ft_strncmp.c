/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:52:27 by anzahoro          #+#    #+#             */
/*   Updated: 2024/11/27 23:37:18 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i + 1 < n && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (!!n * ((unsigned char)s1[i] - (unsigned char)s2[i]));
}

// const isGirl = true;
// const name = null

// !!name
// if is !!isGirl  no!!
// else yaaa!