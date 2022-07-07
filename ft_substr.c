/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:15:01 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/02 20:15:01 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	sub_str = (char *) malloc(len +1);
	i = 0;
	if (sub_str == NULL)
		return (NULL);
	while (i < len && s[i + start] != '\0')
	{
		sub_str[i] = s[i + start];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*
int	main(void)
{
	char	str[] = "42WolfsburgAshahin";
	char	*sub_str = ft_substr(str, 2, 9);

	printf("**%s\n", sub_str);
	free(sub_str);
	return (0);
}
*/