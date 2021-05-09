/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 18:45:30 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 17:08:30 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	Takes as a parameter an element and frees the memory
**			of the element's content using the function 'del' given
**			as a parameter and free the element.
**			The memory of 'next' must not be freed.
** @param	lst: The element to free.
** @param	(*del)(void*):
			The address of the function used to delete the content.
** @return	none
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
	return ;
}
