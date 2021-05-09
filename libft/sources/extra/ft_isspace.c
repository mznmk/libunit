/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:51:38 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 23:15:58 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The isspace() function tests for white-space characters.
**			For any locale, this includes the following standard characters:
**				011 '\t' 012 '\n' 013 '\v' 014 '\f' 015'\r' 040 ' ' (octal)
**			In the "C" locale,
**			isspace() returns non-zero for these characters only.
**			The value of the argument must be representable as an unsigned char
**			or the value of EOF.
** @return	The isspace() functions return zero if the character tests false
**			and return non-zero if	the character tests true.
*/
int	ft_isspace(int c)
{
	if (('\t' <= c && c <= '\r')
		|| (c == ' '))
		return (1);
	return (0);
}
