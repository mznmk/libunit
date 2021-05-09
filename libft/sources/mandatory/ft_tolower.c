/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:09:00 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/26 22:32:28 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The tolower() function converts an upper-case letter
**			to the corresponding lower-case letter.
**			The argument must be representable
**			as an unsigned char or the value of EOF.
** @return	If the argument is an upper-case letter,
**			the tolower() function returns the corresponding lower-case letter
**			if there is one; otherwise, the argument is returned unchanged.
*/
int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c = c - ('A' - 'a');
	return (c);
}
