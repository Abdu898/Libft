/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:44:43 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/22 19:44:43 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	else
		return (c);
}
/*
int	main()
{
	printf("%c\n", ft_tolower('$'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('H'));
	printf("%c\n", ft_tolower('Z'));
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('d'));
	printf("%c\n", ft_tolower('z'));
	printf("%c\n", ft_tolower(' '));
	return (0);
}
*/