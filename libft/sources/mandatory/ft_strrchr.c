/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/25 21:41:44 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The strchr() function locates the first occurrence of c
**			(converted to a char) in the string pointed to by s.
**			The terminating null character is considered part of the string;
**			therefore if c is `\0', the	functions locate the terminating `\0'.
**			The strrchr() function is identical to strchr() except it locates
**			the last occurrence of c.
** @return	The functions strchr() and strrchr() return a pointer
**			to the located character,
**			or NULL	if the character does not appear in the	string.
*/
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*c_s;
	char	*find_ptr;

	len = ft_strlen((char *)s);
	c_s = (char *)s;
	find_ptr = NULL;
	i = 0;
	while (i <= len)
	{
		if (c_s[i] == (char)c)
			find_ptr = &c_s[i];
		i++;
	}
	return (find_ptr);
}
