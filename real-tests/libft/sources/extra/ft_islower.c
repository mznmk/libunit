/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:50:54 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 23:47:23 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The islower() function tests for any lower-case letters.
**			The value of the argument must be representable
**			as an unsigned char or the value of EOF.
**			In the ASCII character set, this includes the following characters
**			(with their numeric values shown in octal):
**				141 'a' - 172 'z'
** @return	The islower() function returns zero if the character tests false
**			and returns non-zero if the character tests true.
*/
int	ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}
