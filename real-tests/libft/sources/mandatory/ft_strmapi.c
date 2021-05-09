/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 01:40:50 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:59:50 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	Applies the function 'f' to each character of the string 's'
**			to create a new string (with malloc(3))
**			resulting from successive applications of 'f'.
** @param	s: The string on which to iterate.
** @param	(*f): The function to apply to each character.
** @return	The string created from the successive applications of 'f'.
**			Returns NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (s && !f)
		return (ft_strdup(s));
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = -1;
	while (str[++i])
		str[i] = f((unsigned int)i, str[i]);
	return (str);
}
