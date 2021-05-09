/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:51:54 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 23:26:09 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The ispunct() function tests for any printing character
**			except for space (' ') or a	character for which isalnum(3) is true.
**			The value of the argument must be representable
**			as an unsigned char or the value of EOF.
**			In the ASCII character set, this includes the following characters
**			(with their numeric values shown in octal):
**				041 '!' 042 '"' 043 '#' 044 '$' 045 '%'
**				046 '&' 047 ''' 050 '(' 051 ')' 052 '*'
**				053 '+' 054 ',' 055 '-' 056 '.' 057 '/'
**				072 ':' 073 ';' 074 '<' 075 '=' 076 '>'
**				077 '?' 100 '@' 133 '[' 134 '\' 135 ']'
**				136 '^' 137 '_' 140 '`' 173 '{' 174 '|'
**				175 '}' 176 '~'
** @return	The ispunct() functions return zero if the character tests false
**			and return non-zero if the character tests true.
*/
int	ft_ispunct(int c)
{
	if (('!' <= c && c <= '/')
		|| (':' <= c && c <= '@')
		|| ('[' <= c && c <= '`')
		|| ('{' <= c && c <= '~'))
		return (1);
	return (0);
}
