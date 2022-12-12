/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:45:58 by ashahin           #+#    #+#             */
/*   Updated: 2022/10/25 22:18:42 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	if (!lst || !(*f))
// 		return ;
// 	while (lst)
// 	{
// 		(*f)(lst->content);
// 		lst = lst->next;
// 	}
// }
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}