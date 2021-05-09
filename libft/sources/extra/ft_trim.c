/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 01:10:55 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 01:46:31 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	remove from the beginning and the end of the string.
**			(move pointer and put new null-terminated-character.
**			not reallocated memory.)
** @param	str: The string to be trimmed.
** @return	The trimmed string.
*/
char	*ft_trim(const char *str)
{
	return (ft_trim_left(ft_trim_right(str)));
}
