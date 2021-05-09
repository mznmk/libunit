/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 23:53:21 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The isascii() function tests for an ASCII character,
**			which is any character between 0 and octal 0177 inclusive.
** @return	The isascii() function returns zero if the character tests false
**			and returns non-zero if the character tests true.
*/
int	ft_isascii(int c)
{
	if (00 <= c && c <= 0177)
		return (1);
	return (0);
}
