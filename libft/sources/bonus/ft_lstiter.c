/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:44:29 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 17:16:19 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	Iterates the list 'lst' and applies the function 'f'
**			to the content of each element.
** @param	lst: The address of a pointer to an element.
** @param	(*f)(void*): The address of the function used
**			to iterate on the list.
** @return	none
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
	return ;
}
