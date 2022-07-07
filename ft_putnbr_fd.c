/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:35:28 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/07 20:35:28 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}
/*
#include "ft_itoa.c"
#include "ft_putstr_fd.c"
int	main(void)
{
	int	n = 123456789;
	int handle = open("C:\\Users\\abdul\\42\\Libft\\hi.txt", O_WRONLY);
	ft_putnbr_fd(n, handle);
	return 0;
}
*/