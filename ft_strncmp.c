/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:24:06 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/22 18:24:06 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
does it return the differnce between the two ascii values or -1, 0 and 1
*/
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (str1[i] == str2[i])
		{
			if (i == (n - 1))
				return (0);
		}
		if (str1[i] >= str2[i])
			return ((int)(str1[i] - str2[i]));
		if (str1[i] <= str2[i])
			return ((int)(str1[i] - str2[i]));
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[10];
	char	str2[10];

	strcpy(str1, "abcdef");
	strcpy(str2, "KcBCDEF");
	printf("%d\n", ft_strncmp(str1, str2, 13));
	return (0);
}
*/