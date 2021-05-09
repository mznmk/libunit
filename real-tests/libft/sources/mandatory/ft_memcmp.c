/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 20:57:29 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The memchr() function locates the first occurrence of c
**			(converted to an unsigned char) in string b.
** @return	The memcmp() function returns zero if the two strings are identical,
**			otherwise returns the difference
**			between the first two differing bytes
**			(treated as unsigned char values,
**			so that `\200' is greater than `\0', for example).
**			Zero-length	strings	are always identical.
*/
int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*uc_b1;
	unsigned char	*uc_b2;

	uc_b1 = (unsigned char *)b1;
	uc_b2 = (unsigned char *)b2;
	while (0 < len--)
	{
		if (*uc_b1 != *uc_b2)
			return (*uc_b1 - *uc_b2);
		uc_b1++;
		uc_b2++;
	}
	return (0);
}
