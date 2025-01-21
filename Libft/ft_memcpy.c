/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:33:36 by anzahoro          #+#    #+#             */
/*   Updated: 2024/12/04 19:54:33 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s1 != s2)
	{
		while (i < n)
		{
			((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
			i++;
		}
	}
	return (s1);
}
/*
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    int result;

    char original[50];
    char newcopy[50];

    strcpy(original, "C memcpy at TechOnTheNet.com");
    result = ft_memcpy(newcopy, original, 24);
    newcopy[24] = 0;
    printf("%s\n", newcopy);
    return 0;
}
*/
