/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 13:41:17 by mmizuno           #+#    #+#             */
/*   Updated: 2021/01/20 01:12:49 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstreverse(t_list **lst)
{
	t_list	*priv_list;
	t_list	*now_list;
	t_list	*next_list;

	now_list = *lst;
	priv_list = NULL;
	while (now_list != NULL)
	{
		next_list = now_list->next;
		now_list->next = priv_list;
		priv_list = now_list;
		now_list = next_list;
	}
	*lst = priv_list;
}
