/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 21:26:28 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The memcpy() function copies len bytes
**			from string src to string dst.
**			If src and dst overlap, the results are not defined.
** @return	The memcpy() function returns the original value of dst.
*/
void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	if (!dst && !src)
		return (NULL);
	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	while (0 < len--)
		*uc_dst++ = *uc_src++;
	return (dst);
}
