/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:04:39 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/29 23:04:39 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The strlcpy() and strlcat() functions copy and concatenate strings respectively.
 They are designed to be safer, more consistent,
  and less error prone replacements for strncpy(3) and strncat(3).
   Unlike those functions, strlcpy() and strlcat() take the full
    size of the buffer (not just the length) and guarantee 
	to NUL-terminate the result (as long as size is larger than 0 or,
	 in the case of strlcat(), as long as there is at
	  least one byte free in dst). Note that a byte for the NUL
	   should be included in size. Also note that strlcpy() and strlcat()
	    only operate on true ''C'' strings. This means that for strlcpy()
		 src must be NUL-terminated and for strlcat()
		  both src and dst must be NUL-terminated.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	i = 0;
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}
