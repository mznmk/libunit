/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 23:49:53 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The isdigit() function tests for a decimal digit character.
**			Regardless of locale, this includes the following characters only:
**				'0' '1' '2' '3' '4' '5' '6' '7' '8' '9'
**			The value of the argument must be representable as an unsigned char
**			or the value of EOF.
** @return	The isdigit() function returns zero if the character tests false
**			and returns non-zero if the character tests true.
*/
int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
