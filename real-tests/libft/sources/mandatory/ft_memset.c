/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 23:08:19 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 17:45:08 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The memset() function writes len bytes of value c
**			(converted to an unsigned char) to the string dest.
**			Undefined behaviour from memset(), resulting from storage overflow,
**			will occur if len is greater than the length of buffer dest.
**			The behaviour is also undefined if dest is an invalid pointer.
** @return	The memset() function returns its first argument.
*/
void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*uc_dest;
	unsigned char	uc_c;

	uc_dest = (unsigned char *)dest;
	uc_c = (unsigned char)c;
	while (0 < len--)
		*uc_dest++ = uc_c;
	return (dest);
}
