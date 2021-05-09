/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:23:05 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/26 23:46:45 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The strdup() function allocates sufficient memory for a copy
**			of the string str, does the copy, and returns a pointer to it.
**			The pointer may subsequently be used as an argument
**			to the function free(3).
**			If insufficient memory is available,
**			NULL is returned and errno is set to ENOMEM.
** @return	duplicated string pointer.
*/
char	*ft_strdup(const char *str)
{
	char			*dest;
	unsigned long	len;
	unsigned long	i;

	len = ft_strlen((char *)str);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = -1;
	while (++i < len)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}
