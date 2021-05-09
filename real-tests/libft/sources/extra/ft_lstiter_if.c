/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_if.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 13:41:17 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:14:43 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstiter_if(t_list *lst,
						void (*f)(void *), void *data_ref, int (*cmp)())
{
	while (lst)
	{
		if ((*cmp)(lst->content, data_ref) == 0)
			(*f)(lst->content);
		lst = lst->next;
	}
	return ;
}
