/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:06:58 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/26 22:32:38 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The toupper() function converts a lower-case letter
**			to the corresponding upper-case letter.
**			The argument must be representable
**			as an unsigned char or the value of EOF.
** @return	If the argument is a lower-case letter,
**			the toupper() function returns the corresponding upper-case letter
**			if there is one; otherwise, the argument is returned unchanged.
*/
int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c = c - ('a' - 'A');
	return (c);
}
