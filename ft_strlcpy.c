/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:04:39 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/29 23:04:39 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	src_size++;
	if (size == 0)
		return (src_size);
	i = 0;
	while (i + 1 < size && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}
/*
int	main(void)
{
	char	s1[] = "hello 42";
	char	s2[]= "abdulrahman shahin";
	size_t	k;
	ft_strlcpy(s2, s1, 10);
	k = 0;
	while (s2[k] != '\0')
	{
		printf("**%c", s2[k]);
		k++;
	}
	return (0);
}
	// if (!dst || !src)
	// 	return (0);
*/
