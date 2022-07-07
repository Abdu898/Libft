/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:36:52 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/07 19:36:52 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ();
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
#include "ft_putchar_fd.c"
int	main(void)
{
	char	* s = "hello 42 wolfsburg2";
	int handle = open("C:\\Users\\abdul\\42\\Libft\\hi.txt", O_WRONLY);
	ft_putstr_fd(s, handle);
	return 0;
}
*/