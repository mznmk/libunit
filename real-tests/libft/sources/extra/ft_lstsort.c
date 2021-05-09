/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 18:35:06 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:11:50 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	is_asc_sorted(t_list *begin_list, int (*cmp)())
{
	t_list	*now_list;
	t_list	*next_list;

	now_list = begin_list;
	if (!now_list)
		return (1);
	else if (!now_list->next)
		return (1);
	next_list = now_list->next;
	while (now_list->next)
	{
		if ((*cmp)(now_list->content, next_list->content) > 0)
			return (0);
		now_list = now_list->next;
		next_list = now_list->next;
	}
	return (1);
}

void	ft_lstsort(t_list **begin_list, int (*cmp)())
{
	t_list	*now_list;
	t_list	*next_list;
	void	*tmp;

	while (!is_asc_sorted(*begin_list, cmp))
	{
		now_list = *begin_list;
		next_list = now_list->next;
		while (now_list->next)
		{
			if ((*cmp)(now_list->content, next_list->content) > 0)
			{
				tmp = now_list->content;
				now_list->content = next_list->content;
				next_list->content = tmp;
			}
			now_list = now_list->next;
			next_list = now_list->next;
		}
	}
}
