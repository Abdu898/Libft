/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:30:08 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/07 20:30:08 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	ft_putchar_fd('\n', fd);
}
/*
#include "ft_putchar_fd.c"
int	main(void)
{
	char	* s = "hello 42 wolfsburg2";
	int handle = open("C:\\Users\\abdul\\42\\Libft\\hi.txt", O_WRONLY);
	ft_putendl_fd(s, handle);
	return 0;
}
*/