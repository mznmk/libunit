/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:58:29 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/26 01:03:18 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The isblank() function tests for a space or tab character.
**			For any locale, this includes the following standard characters:
**				"\t" " "
**			In the "C" locale, a successful isblank() test is limited
**			to these characters only.
**			The value of the argument must be representable
**			as an unsigned char or the value of EOF.
** @return	The isblank() function returns zero if the character tests false
**			and returns non-zero if the character tests true.
*/
int	ft_isblank(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}
