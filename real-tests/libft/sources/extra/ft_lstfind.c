/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 13:41:17 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:14:33 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstfind(t_list *lst, void *data_ref, int (*cmp)())
{
	while (lst)
	{
		if ((*cmp)(lst->content, data_ref) == 0)
			break ;
		lst = lst->next;
	}
	return (lst);
}
