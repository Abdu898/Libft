/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:30:52 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/06 20:30:52 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	chars_n;

	if (n == 0)
		return (1);
	else if (n < 0)
		chars_n = 1;
	else
		chars_n = 0;
	while (n != 0)
	{
		n = n / 10;
		chars_n++;
	}
	return (chars_n);
}

char	*ft_itoa(int n)
{
	int		div_rst;
	int		len;
	char	*str;

	len = count_digits(n);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	div_rst = 0;
	while (n != 0)
	{
		div_rst = n % 10;
		str[len - 1] = div_rst + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
/*
int	main(void)
{
	int		n;
	char	*str;

	n = 123456789;
	str = ft_itoa(n);
	printf("*%lld\n", strlen(str));
	printf("*%s\n", str);
	free (str);
	return (0);
}
*/