/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:40:34 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/26 19:40:34 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned char	*temb_to;
	unsigned char	*temb_from;

	temb_to = (unsigned char *)to;
	temb_from = (unsigned char *)from;
	while (numBytes--)
	{
		*(temb_to + numBytes) = *(temb_from + numBytes);
	}
	return (to);
}
/*
int	main(void)
{
	unsigned char	d[110];
	int	i;

	i = 0;
	while (i <= 100)
	{
		d[i] = i + 1;
		printf("*%dth:%d\t", i + 1, d[i]);
		i++;
	}
	ft_memmove(d +50, d, 50);
	printf("%d", *(d+50));
	i = 0;

	while (i < 100)
	{
		printf(" %dth:%d\t", i + 1, d[i]);
		i++;
	}
	return (0);
}
		// printf(" %lldth:%d=%d\t", numBytes + 1, temb_from[numBytes],/
			//  temb_to[numBytes]);
*/