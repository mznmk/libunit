/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 18:17:08 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 17:30:47 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	Adds the element 'new' at the end of the list.
** @param	lst: The address of a pointer to the first link of a list.
** @param	newlst:
			The address of a pointer to the element to be added to the list.
** @return	none
*/
void	ft_lstadd_back(t_list **lst, t_list *newlst)
{
	t_list	*lastlst;

	lastlst = ft_lstlast(*lst);
	if (lastlst != NULL)
	{
		lastlst->next = newlst;
		return ;
	}
	else
	{
		*lst = newlst;
		return ;
	}
}
