/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 20:57:27 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The memccpy() function copies bytes from string src to string dst.
**			If the character c (as converted to an unsigned char) occurs
**			in the string src, the copy stops and a pointer to the byte
**			after the copy of c in the string dst is returned.
**			Otherwise, len bytes are copied, and a NULL pointer is returned.
** @return	If the character c (as converted to an unsigned char) occurs
**			in the string src, the copy stops and a pointer to the byte
**			after the copy of c in the string dst is returned.
**			Otherwise, len bytes are copied, and a NULL pointer is returned.
*/
void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;
	unsigned char	uc_c;

	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	uc_c = (unsigned char)c;
	while (0 < len--)
	{
		*uc_dst++ = *uc_src++;
		if (*uc_dst == uc_c)
			return ((void *)uc_dst);
	}
	return (NULL);
}
