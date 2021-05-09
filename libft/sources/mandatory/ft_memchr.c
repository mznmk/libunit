/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 20:57:28 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The memchr() function locates the first occurrence of c
**			(converted to an unsigned char) in string b.
** @return	The memchr() functions return a pointer to the byte located,
**			or NULL if no such byte exists within len bytes.
*/
void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*uc_b;
	unsigned char	uc_c;

	uc_b = (unsigned char *)b;
	uc_c = (unsigned char)c;
	while (0 < len--)
	{
		if (*uc_b == uc_c)
			return (uc_b);
		uc_b++;
	}
	return (NULL);
}
