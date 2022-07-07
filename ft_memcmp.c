/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:03:34 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/26 14:03:34 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*temb_str1;
	unsigned char	*temb_str2;

	while (n)
	{
		if (temb_str1[n] == temb_str2[n])
		{
			if (n == 0)
				return (0);
		}
		if (temb_str1[n] >= temb_str2[n])
			return ((int)(temb_str1[n] - temb_str2[n]));
		if (temb_str1[n] <= temb_str2[n])
			return ((int)(temb_str1[n] - temb_str2[n]));
	}
	return (0);
}
/*
// #include "ft_memcpy"

int	main(void)
{
	char	str1[15];
	char	str2[15];
	int	ret;

	str1[15] = "abdcef";
	str2[15] = "ABDCEF"; 


//	ft_memcpy(str1, "abcdef", 6);
//	ft_memcpy(str2, "ABCDEF", 6);

	ret = ft_memcmp(str1, str2, 5);

//	if(ret > 0) {
//	printf("str2 is less than str1");
//	} else if(ret < 0) {
// 	  printf("str1 is less than str2");
//    } else {
// 	  printf("str1 is equal to str2");
//   }
	printf("%d     ", ret);
   
   return(0);
}
*/