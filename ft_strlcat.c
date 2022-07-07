/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:57:06 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/29 23:57:06 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	dst_len = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	i = 0;
	while (src[i] != '\0' && dst_len + i < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + i);
}
/*
int	main(void)
{
	char	s1[] = "hello 42";
	char	s2[] = "abdulrahman shahin";
	size_t	k;

	ft_strlcat(s2, s1, 50);
	k = 0;
	while (s2[k] != '\0')
	{
		printf("0%c", s2[k]);
		k++;
	}
	return (0);
}
*/