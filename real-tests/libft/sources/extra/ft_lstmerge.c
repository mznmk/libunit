/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 18:35:06 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:08:45 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstmerge(t_list **lst1, t_list *lst2)
{
	t_list	*now_list;

	now_list = *lst1;
	if (!now_list)
	{
		now_list = lst2;
		return ;
	}
	while (now_list->next)
		now_list = now_list->next;
	now_list->next = lst2;
	return ;
}
