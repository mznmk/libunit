/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 01:37:09 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 00:21:19 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	is_char_in_set(char c, char const *set)
{
	size_t		i;

	i = -1;
	while (set[++i])
	{
		if (c == set[i])
			return (1);
	}
	return (0);
}

/*!
** @brief	Allocates (with malloc(3)) and returns a copy of 's1'
**			with the characters specified in 'set' removed
**			from the beginning and the end of the string.
** @param	s1: The string to be trimmed.
** @param	set: RThe reference set of characters to trim.
** @return	The trimmed string. NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front_pos;
	size_t	back_pos;

	if (!s1 || !set)
		return (NULL);
	front_pos = 0;
	back_pos = ft_strlen((char *)s1);
	if (back_pos == 0)
		return (ft_strdup(""));
	while (is_char_in_set(s1[front_pos], set))
		front_pos++;
	while (is_char_in_set(s1[back_pos - 1], set))
		back_pos--;
	if (back_pos <= front_pos)
		return (ft_strdup(""));
	else if (front_pos == back_pos)
		return (ft_strdup(""));
	else
		return (ft_substr(s1, front_pos, back_pos - front_pos));
}
