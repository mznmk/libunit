/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_right.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 01:10:53 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 01:46:30 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	remove from the end of the string.
**			(put new null-terminated-character. not reallocated memory.)
** @param	str: The string to be trimmed.
** @return	The trimmed string.
*/
char	*ft_trim_right(const char *str)
{
	char		*tmp;
	size_t		i;

	if (!str)
		return (NULL);
	tmp = (char *)str;
	i = ft_strlen(tmp) - 1;
	while (i > 0 && tmp[i] == ' ')
		i--;
	tmp[i + 1] = '\0';
	return (tmp);
}
