/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:52:00 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 17:35:44 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	Iterates the list 'lst' and applies the function 'f'
**			to the content of each element.
**			Creates a new list resulting of the successive applications of
**			the function 'f'.
**			The 'del' function is used to delete the content of an element
**			if needed.
** @param	lst: The address of a pointer to an element.
** @param	(*f)(void*): The address of the function used
**			to iterate on the list.
** @param	(*del)(void*): The address of the function used
**			to delete the content of an element if needed.
** @return	The new list. NULL if the allocation fails.
** @note	I feel like I'm doing unnecessary processing...
**			If I have time, I'm gonna rewrite this function...
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newelem;
	t_list	*newlist_temp;

	if (!lst || !f || !del)
		return (NULL);
	newlist = ft_lstnew(f(lst->content));
	if (!newlist)
		return (NULL);
	newlist_temp = newlist;
	lst = lst->next;
	while (lst)
	{
		newelem = ft_lstnew(f(lst->content));
		if (!newelem)
		{
			ft_lstclear(&newlist_temp, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newelem);
		lst = lst->next;
	}
	return (newlist_temp);
}
