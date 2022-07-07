/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:36:42 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/07 03:36:42 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, s);
			i++;
		}
	}
}
/*
void	my_tolower(unsigned int i, char *str)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
}

int	main(void)
{
	char	str[50] = "HELLO_MR_ABDU";

	ft_striteri(str, my_tolower);
	printf("The result is %s\n", str);
	return (0);
}
*/