/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsorted_merge.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 18:35:06 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:13:08 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstsorted_merge(t_list **lst1, t_list *lst2, int (*cmp)())
{
	t_list	*now_list;

	now_list = lst2;
	while (now_list)
	{
		ft_lstsorted_insert(lst1, now_list->content, cmp);
		now_list = now_list->next;
	}
}
