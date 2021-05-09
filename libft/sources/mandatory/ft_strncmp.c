/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 22:02:56 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	strncmp() functions lexicographically compare
**			the nullterminated strings s1 and s2.
**			The strncmp() function compares not more than len characters.
**			Because strncmp() is designed for comparing strings
**			rather than binary data,
**			characters that appear after a `\0' character are not compared.
** @return	strncmp() functions return an integer greater than, equal to,
**			or less than 0, according as the string s1 is greater than,
**			equal to, or less than the string s2.
**			The comparison is done using un signed characters,
**			so that `\200' is greater than '\0'.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;
	size_t			i;

	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	if (len == 0)
		return (0);
	i = 0;
	while (uc_s1[i] && uc_s2[i]
		&& (uc_s1[i] == uc_s2[i]) && (i < len - 1))
		i++;
	return ((int)(uc_s1[i]) - (int)(uc_s2[i]));
}
