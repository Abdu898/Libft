/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:26:52 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/01 22:26:52 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *strn)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	if (strn[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (strn[i] != '\0')
	{
		if (strn[i] >= '0' && strn[i] <= '9')
		{
			res = res * 10 + strn[i] - '0';
			i++;
		}
		else
			return (0);
	}
	res = res * sign;
	return (res);
}
/*
int	main(void)
{
	char	str[] = "-1206789";
	int	val = ft_atoi(str);

	printf("*%d\n", val);
	return (0);
}
*/