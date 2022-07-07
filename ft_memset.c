/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:47:58 by ashahin           #+#    #+#             */
/*   Updated: 2022/07/07 21:47:58 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*temb_str;
	size_t	i;

	i = 0;
	temb_str = (char *)str;
	while (i < n)
	{
		temb_str[i] = c + '0';
		i++;
	}
	return (temb_str);
}
/*
int main(){
	char *str = "assalamu Aleykum bruder" ;
	int c = 't';
	ft_memset(str, c, 11);
	printf("the ret is:%s \n", str);
	return (0);

}
void	*ft_memset(void *s, int c, int len)
{
	unsigned char *str;
	
	str = (unsigned char *)s;
	while (len--)
		*str++ = (unsigned char)c;
	return (s);
}
*/