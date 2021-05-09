/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:11:23 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 23:41:19 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The isxdigit() function tests for any hexadecimal-digit character.
**			Regardless of locale, this includes the following characters only:
**				'0' - '9' 'A' - 'F' 'a' - 'f'
**			The ishexnumber() function behaves	similarly to isxdigit(),
**			but may recognize additional characters,
**			depending on the current locale setting.
**			The value of the argument must be representable
**			as an unsigned char or the value of EOF.
** @return	The isxdigit() function returns zero if the character tests false
**			and returns non-zero if the character tests true.
*/
int	ft_isxdigit(int c)
{
	if (('0' <= c && c <= '9')
		|| ('A' <= c && c <= 'F')
		|| ('a' <= c && c <= 'f'))
		return (1);
	return (0);
}
