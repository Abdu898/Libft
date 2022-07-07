/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:29:31 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/02 18:29:31 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	n;

	while (s[n] != '\0')
		n++;
	p = (char *)malloc(n + 1);
	if (p == NULL)
		return (0);
	p[n + 1] = '\0';
	while (n--)
		p[n] = s[n];
	return (p);
}
/*
int	main(void)
{
	char	str[] = "42WOlfsburg";
	char	*p = ft_strdup(str);

	printf("*%c\n", p[10]);
	free(p);
	return (0);
}
*/