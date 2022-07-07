/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:58:44 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/22 17:58:44 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temb_str;
	int				i;

	temb_str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*(temb_str + i) == (char) c)
		{
			return (temb_str + i);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	int c = ' ';
	char *s = "hello mr 42";
	printf("the result is: %s\n", (char *) ft_memchr(s, c, 9));
	return (0);
}
*/