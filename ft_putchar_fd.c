/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:32:33 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/07 18:32:33 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int handle = open("C:/Users/abdul/42/Libft/hi.txt", O_WRONLY);
	// ft_putchar_fd('c', handle);
	int count = write(handle, "b", 1); // Pass a single character
	if (count == 1) {
		printf("Success!");
	return 0;
}*/