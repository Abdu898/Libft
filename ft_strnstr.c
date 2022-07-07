/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 21:54:23 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/01 21:54:23 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	ptr = (char *) big;
	i = 0;
	j = 0;
	while (i < len && big[i] != '\0')
	{
		while (big[i + j] == little[j])
		{
			if (big[i + j] == '\0' && little[i + j] != '\0')
				return (NULL);
			if (little[j + 1] == '\0')
				return (ptr + i);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("string is: %s\n", ft_strnstr("hello mr 42 wolfsburg", "mr", 20));
	return (0);
}
*/