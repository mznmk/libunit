/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:50:57 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 23:44:03 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The isupper() function tests for any upper-case letter.
**			The value of the argument must be representable
**			as an unsigned char	or the value of	EOF.
**			In the ASCII character set, this includes the following characters
**			(with their numeric values shown in octal):
**				101 'A' - 132 'Z'
** @return	The isupper() function returns zero if the 	character tests	false
**			and re-turns non-zero if the character tests true.
*/
int	ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}
