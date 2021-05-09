/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 13:41:17 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:14:09 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstat(t_list *startlst, unsigned int nbr)
{
	t_list			*nowlst;
	unsigned int	i;

	nowlst = startlst;
	i = 0;
	while (i < nbr)
	{
		if (!nowlst)
			return (NULL);
		nowlst = nowlst->next;
		i++;
	}
	return (nowlst);
}
