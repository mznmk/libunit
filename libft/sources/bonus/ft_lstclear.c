/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 18:52:45 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 17:12:29 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	Deletes and frees the given element and every successor
**			of that element,vusing the function 'del' and free(3).
**			Finally, the pointer to the list must be set to NULL.
** @param	lst: The address of a pointer to an element.
** @param	(*del)(void*): The address of the function used
**			to delete the content of the element.
** @return	none
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextlst;

	if (!del || !lst || !*lst)
		return ;
	while (*lst)
	{
		nextlst = (*lst)->next;
		(*del)((*lst)->content);
		free((*lst));
		*lst = nextlst;
	}
	*lst = NULL;
}
