/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 22:01:48 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The strnstr() function locates the first occurrence of
**			the null-terminated string little in the string big,
**			where not more than len characters are searched.
**			Characters that appear after a '\0' character are not searched.
**			Since the strnstr() function is	a FreeBSD specific API,
**			it should only be used when portability is not a concern.
** @return	If little is an empty string, big is returned;
**			if little occurs nowhere in	big, NULL is returned;
**			otherwise a pointer to the first character of
**			the first occurrence of little is returned.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	little_len = ft_strlen((char *)little);
	if (little_len == 0)
		return ((char *)big);
	i = 0;
	while ((big[i]) && (i < len))
	{
		j = 0;
		while ((big[i + j]) && (little[j])
			&& (big[i + j] == little[j]) && (i + j < len))
			j++;
		if (j == little_len)
			return ((char *)(&big[i]));
		i++;
	}
	return (NULL);
}
