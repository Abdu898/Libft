/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 01:13:30 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/07 01:13:30 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *) malloc(sizeof(*str) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	str[ft_strlen(str)] = '\0';
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/*
#include "ft_strlen.c"
char	put_index(unsigned int i, char c)
{
	if (i <= 9)
		c = i + '0';
	else
		c = '+';
	return (c);
}

int	main(void)
{
	char	str[50] = "HELLO_mr _abdu";
	char	*result = ft_strmapi(str, put_index);

	printf("The result is %s\n", str);
	printf("The result is %s\n", result);
	free (result);
	return (0);
}
*/