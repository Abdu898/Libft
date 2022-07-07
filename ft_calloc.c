/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:49:07 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/02 15:49:07 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nel, size_t elsize)
{
	unsigned char	*str;
	void			*p;

	p = malloc(nel * elsize);
	if (p == NULL)
		return (p);
	str = (unsigned char *) p;
	while (nel--)
		*str++ = '\0';
	return (p);
}

/*
void	ft_bzero(void *s, size_t n)
{
	unsigned char 	*str;

	str = (unsigned char *) s;
	while (n--)
	{
		*str++ = '\0';
	}
}

int	main(void)
{
	void	*p;

	p = ft_calloc(5, sizeof(int));
	printf("the elements are: %s", p);
	free(p);
	return (0);
}
*/