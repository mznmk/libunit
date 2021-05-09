/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 01:39:56 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 00:57:07 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static void	recursive_countlen(long n, int *len)
{
	if (n < 0)
	{
		(*len)++;
		n = n * -1;
	}
	if (9 < n)
	{
		recursive_countlen(n / 10, len);
		recursive_countlen(n % 10, len);
	}
	else
		(*len)++;
}

static char	*recursive_itoa(long n, char *str, int *index)
{
	if (n < 0)
	{
		str[(*index)] = '-';
		(*index)++;
		n = n * -1;
	}
	if (9 < n)
	{
		recursive_itoa(n / 10, str, index);
		recursive_itoa(n % 10, str, index);
	}
	else
	{
		str[(*index)] = '0' + n;
		(*index)++;
	}
	str[(*index)] = '\0';
	return (str);
}

/*!
** @brief	Allocates (with malloc(3)) and returns a string
**			representing the integer received as an argument.
**			Negative numbers must be handled.
** @param	n: The integer to convert.
** @return	The string representing the integer. NULL if the allocation fails.
*/
char	*ft_itoa(int n)
{
	char	*str;
	long	long_n;
	int		len;
	int		index;

	long_n = (long)n;
	len = 0;
	recursive_countlen(long_n, &len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	index = 0;
	str = recursive_itoa(long_n, str, &index);
	return (str);
}
