/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <abdoatiya60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 21:00:46 by marvin            #+#    #+#             */
/*   Updated: 2022/06/21 21:00:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (0);
	else
		return (1);
}

/*
#include<stdio.h>

int	main(){
	char c;

	c = 'g';
	printf("%d \n",ft_isascii(c));
	return(0);
}
*/