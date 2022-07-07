/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:40:17 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/22 17:40:17 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
		return (0);
	else
		return (1);
}
/*
int	main(){
	int c;

	c = 32;
	printf("%d ",ft_isprint(c));
	c = 33;
	printf("%d ",ft_isprint(c));
	c = 65;
	printf("%d ",ft_isprint(c));
	c = 90;
	printf("%d ",ft_isprint(c));
	c = 126;
	printf("%d ",ft_isprint(c));
	c = 127;
	printf("%d ",ft_isprint(c));
return(0);
}
*/