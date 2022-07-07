/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:22:14 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/22 17:22:14 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isapha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (0);
	else
		return (1);
}

/*
#include<stdio.h>

int	main(){
	char c;

	c = 70;
	printf("%d \n",ft_isapha(c));
	return(0);
}
*/