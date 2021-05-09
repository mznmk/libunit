/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 01:10:44 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 01:46:27 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	remove from the beginning of the string.
**			(move pointer. not reallocated memory.)
** @param	str: The string to be trimmed.
** @return	The trimmed string.
*/
char	*ft_trim_left(const char *str)
{
	char		*tmp;

	if (!str)
		return (NULL);
	tmp = (char *)str;
	while (*tmp == ' ' && *tmp != '\0')
		tmp++;
	return (tmp);
}
