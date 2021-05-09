/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 23:51:59 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The isalnum() function tests for any character
**			for which isalpha(3) or isdigit(3) is true.
**			The value of the argument must be representable
**			as an unsigned char or the value of EOF.
**				060 '0' - 071 '9'
**				101 'A' - 132 'Z'
**				141 'a' - 172 'z'
** @return	The isalnum() function returns zero if the character tests false
**			and returns non-zero if the character tests true.
*/
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
