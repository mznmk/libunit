/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 21:39:23 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The strlcpy() and strlcat() functions copyand concatenate strings
**			with the same input parameters and output result as snprintf(3).
**			They are designed to be safer, more consistent,
**			and less error prone replacements
**			for the easily misused functions strncpy(3) and strncat(3).
**
** 			strlcpy() and strlcat() take the full size of the destination buffer
**			and guarantee NUL-termination if there is room.
**			Note that room for the NUL should be included in dstsize.
**
**			strlcpy() copies up to dstsize -
**			1 characters from the string src to dst,
**			NUL-terminating the result if dstsize is not 0.
**
**			strlcat() appends string src to the end of dst.
**			It will append at most dstsize - strlen(dst) - 1 characters.
**			It will then NUL-terminate,
**			unless dstsize is 0 or the original dst string was longer
**			than dstsize (in practice this should not happen as it means that
**			either dstsize isi ncorrect or that dst is not a proper string).
**
**			If the src and dst strings overlap, the behavior is undefined.
**
** @return	Besides quibbles over the return type (size_t versus int)
**			and signal han-dler safety
**			(snprintf(3) is not entirely safe on some systems),
**			the following two are equivalent:
**				n = strlcpy(dst, src, len);
**				n = snprintf(dst, len, "%s", src);
**
**			Like snprintf(3), the strlcpy() and strlcat() functions return
**			the total length of the string they tried to create.
**			For strlcpy() that means the length of src.
**			For strlcat() that means the initial length of dst plus
**			the length of src.
**
**			If the return value is >= dstsize,
**			the output string has been truncated.
**			It is the caller's responsibility to handle this.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ul_src_len;

	if (!src)
		return (0);
	ul_src_len = ft_strlen((char *)src);
	if (dstsize == 0)
		return (ul_src_len);
	i = 0;
	while ((src[i]) && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ul_src_len);
}
