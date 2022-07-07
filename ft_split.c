/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:18:35 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/04 15:18:35 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	s_index;
	size_t	elements;

	elements = 0;
	s_index = 0;
	while (s[s_index])
	{
		if (s[s_index] == c)
			elements++;
		s_index++;
	}
	elements++;
	return (elements);
}

size_t	count_letters(char const *s, char c, size_t s_index)
{
	size_t	elements;
	size_t	temb_index;

	elements = 0;
	temb_index = s_index;
	while (s[temb_index] != c)
	{
		elements++;
		temb_index++;
	}
	return (elements);
}

void	word_dup(char const *s, char *arr, size_t s_index, size_t l_c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = s_index;
	while (i < l_c)
	{
		arr[i] = s[n];
		i++;
		n++;
	}
	arr[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	s_index;
	size_t	w_c;
	size_t	l_c;
	size_t	i;

	w_c = count_words(s, c);
	arr = (char **) malloc((w_c + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	l_c = 0;
	i = 0;
	s_index = 0;
	while (i < w_c && s[s_index] != '\0')
	{
		l_c = count_letters(s, c, s_index);
		arr[i] = (char *) malloc((l_c + 1) * sizeof(char));
		if (!arr[i])
			return (NULL);
		word_dup(s, arr[i], s_index, l_c);
		s_index = s_index + l_c + 1;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
/*
int	main(void)
{
	char	*s = "JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
	char	**str;
	char	c;
	size_t	i;

	i = 0;
	c = ',';
	str = ft_split(s, c);
	c = ',';
	while (str[i])
	{
		printf("*%s", str[i]);
		i++;
	}
	free(str);
	return (0);
}
*/