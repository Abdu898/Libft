/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:43:16 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/22 19:43:16 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	else
		return (c);
}
/*
int	main()
{
	printf("%c\n", ft_toupper('$'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('H'));
	printf("%c\n", ft_toupper('Z'));
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('d'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper(' '));
	return (0);
}
*/