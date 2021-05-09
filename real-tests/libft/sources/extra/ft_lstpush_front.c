/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:03:01 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:09:26 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstpush_front(t_list **lst, void *data)
{
	t_list	*list;

	if (!lst)
		return ;
	if (*lst)
	{
		list = ft_lstnew(data);
		list->next = *lst;
		*lst = list;
	}
	else
		*lst = ft_lstnew(data);
}
