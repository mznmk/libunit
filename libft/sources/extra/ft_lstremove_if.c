/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_if.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 13:41:17 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:10:36 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstremove_if(t_list **lst, void *data_ref,
						int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*priv_list;
	t_list	*now_list;

	priv_list = NULL;
	now_list = *lst;
	while (now_list != NULL)
	{
		if ((*cmp)(now_list->content, data_ref) == 0)
		{
			if (!priv_list)
				*lst = now_list->next;
			else
			{
				priv_list->next = now_list->next;
				free_fct(now_list);
				now_list = now_list->next;
			}
		}
		if (now_list)
		{
			priv_list = now_list;
			now_list = now_list->next;
		}
	}
}
