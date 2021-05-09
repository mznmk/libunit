/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsorted_insert.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 18:35:06 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:12:44 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstsorted_insert(t_list **lst, void *content, int (*cmp)())
{
	t_list		*newlst;
	t_list		*nowlst;
	t_list		*nextlst;

	newlst = ft_lstnew(content);
	nowlst = *lst;
	if (!nowlst)
	{
		*lst = newlst;
		return ;
	}
	if ((*cmp)(newlst->content, nowlst->content) < 0)
	{
		newlst->next = nowlst;
		*lst = newlst;
		return ;
	}
	nextlst = nowlst->next;
	while (nextlst && (*cmp)(newlst->content, nextlst->content) > 0)
	{
		nowlst = nowlst->next;
		nextlst = nowlst->next;
	}
	newlst->next = nextlst;
	nowlst->next = newlst;
}
