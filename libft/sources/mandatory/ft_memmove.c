/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 20:57:27 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The memmove() function copies len bytes
**			from string src to string dst.
**			The two strings may overlap;
**			the copy is always done in a non-destructive manner.
** @return	The memmove() function returns the original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		uc_dst = (unsigned char *)dst;
		uc_src = (unsigned char *)src;
		while (0 < len--)
			*uc_dst++ = *uc_src++;
	}
	else
	{
		uc_dst = (unsigned char *)dst + (len - 1);
		uc_src = (unsigned char *)src + (len - 1);
		while (0 < len--)
			*uc_dst-- = *uc_src--;
	}
	return (dst);
}
