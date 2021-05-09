/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 23:48:02 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The isalpha() function tests for any character
**			for which isupper(3) or islower(3) is true.
**			The value of the argument must be representable
**			as an unsigned char or the value of EOF.
**				101 'A' - 132 'Z'
**				141 'a' - 172 'z'
** @return	The isalpha() function returns zero if the character tests false
**			and returns non-zero if the character tests true.
*/
int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z'))
		return (1);
	return (0);
}
