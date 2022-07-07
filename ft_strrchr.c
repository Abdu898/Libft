/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:37:20 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/22 18:37:20 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	while (s[len - 1])
	{
		if (s[len] == c)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s;
	char	c;

	c = ' ';
	s = "hello mr 42 badass";
	printf("%s", ft_strrchr(s, c));
	return (0);
}
*/