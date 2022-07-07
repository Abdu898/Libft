/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:11:14 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/26 18:11:14 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict	dst, const void *restrict	src, size_t	n)
{
	unsigned char	*temb_src;
	unsigned char	*temb_dst;

	temb_src = (unsigned char *) src;
	temb_dst = (unsigned char *) dst;
	if (!dst && !src)
		return (dst);
	while (n-- > 0)
	{
		*(temb_dst + n) = *(temb_src + n);
	}
	return ((void *) dst);
}
/*
int	main(void)
{
	char	d[100];
	char	*p;
	int	i;

	i = 0;
	while (i <= 99)
	{
		d[i] = 't';
		d[i + 50] = i;
		i++;
	}
	p = ft_memcpy(d + 50, d, 10);
	printf("the ans is: %c", p[1]);
	return (0);
}
*/