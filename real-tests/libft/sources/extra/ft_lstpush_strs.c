/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_strs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 23:49:46 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:10:04 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstpush_strs(int size, char **strs)
{
	int		i;
	t_list	*list;

	list = NULL;
	i = -1;
	while (++i < size)
		ft_lstpush_back(&list, strs[i]);
	return (list);
}
