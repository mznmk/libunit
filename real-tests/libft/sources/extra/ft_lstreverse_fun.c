/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse_fun.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 18:35:06 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:07:32 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstreverse_fun(t_list *lst)
{
	void			*tmp;
	unsigned int	i;
	unsigned int	j;

	j = ft_lstsize(lst) - 1;
	i = 0;
	while (i < j)
	{
		tmp = ft_lstat(lst, i)->content;
		ft_lstat(lst, i)->content = ft_lstat(lst, j)->content;
		ft_lstat(lst, j)->content = tmp;
		i++;
		j--;
	}
}
