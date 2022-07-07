/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 21:08:35 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/21 21:08:35 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'z')
		return (0);
	else if (c >= 0 && c <= 9)
		return (0);
	else
		return (1);
}
/*
int	main()
{
	char c;

	c = 'g';
	printf("%d ",ft_isalnum(c));
	return(0);
}
*/