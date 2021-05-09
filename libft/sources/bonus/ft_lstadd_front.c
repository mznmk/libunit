/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 16:48:29 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 16:53:13 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	Adds the element 'new' at the beginning of the list.
** @param	lst: The address of a pointer to the first link of a list.
** @param	newlst:
			The address of a pointer to the element to be added to the list.
** @return	none
*/
void	ft_lstadd_front(t_list **lst, t_list *newlst)
{
	if (!lst || !newlst)
		return ;
	newlst->next = *lst;
	*lst = newlst;
}
