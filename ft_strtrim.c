/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:25:10 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/04 13:25:10 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	istotrim(char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	start = 0;
	while (s1[start] && istotrim(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	printf("%d", end);
	while (s1[end] && istotrim(s1[end], set))
		end--;
	str = (char *) malloc(sizeof(*s1 * (end - start + 1)));
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include "ft_strlen.c"
int	main(void)
{
	char	s1[] = "*   *42 wolfsburg ashahin*-*"/ _";
	char	set[] = " /*,_\"\\";
	char	*str = ft_strtrim(s1, set);

	printf("answer is: %s", str);
	free(str);
	return (0);
}
*/