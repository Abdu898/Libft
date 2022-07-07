/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:41:14 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/07 21:41:14 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (n--)
		*str++ = '\0';
}
/*
int	main(void)
{
	int	str[] = {132435,643674,4312123,1434143,\
				34255411,67735873,5115515,143443,\
				344334,1413443,4113141};

	ft_bzero(str, 24);
	printf("answer is:%d", *(str + 5));
	return(0);
}
*/