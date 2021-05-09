/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 23:32:41 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 06:45:22 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The strpbrk() function locates the first occurrence
**			in the string s of any of the bytes in the string accept. 
** @param	s: 
** @param	accept: 
** @return	The strpbrk() function returns a pointer to the byte
**			in s that matches one of the bytes in accept,
**			or NULL if no such byte is found. 
** @note	now implumenting...
*/
char	*ft_strpbrk(const char *s, const char *accept)
{
	int		i;

	if (!s || !accept)
		return (NULL);
	while (s)
	{
		i = -1;
		while (accept[++i])
		{
			if (*s == accept[i])
				return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
