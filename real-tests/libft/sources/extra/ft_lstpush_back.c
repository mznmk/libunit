/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:03:01 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:09:12 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstpush_back(t_list **lst, void *data)
{
	t_list	*list;

	if (!lst)
		return ;
	list = *lst;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = ft_lstnew(data);
	}
	else
		*lst = ft_lstnew(data);
}
