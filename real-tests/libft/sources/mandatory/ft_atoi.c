/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/26 22:44:18 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static void	skipspace_and_checksign(char *nptr, int *pos, int *sign)
{
	while (nptr[*pos]
		&& (nptr[*pos] == '\f' || nptr[*pos] == '\n' || nptr[*pos] == '\r'
			|| nptr[*pos] == ' ' || nptr[*pos] == '\t' || nptr[*pos] == '\v'))
		(*pos)++;
	if (nptr[*pos] == '-')
	{
		*sign = -1;
		(*pos)++;
	}
	else if (nptr[*pos] == '+')
	{
		*sign = 1;
		(*pos)++;
	}
}

/*!
** @brief	The atoi() function converts the initial portion
**			of the string pointed to by nptr to int representation.
**			It is equivalent to:
**				(int)strtol(nptr, NULL, 10);
**			The atoi() function has been deprecated by strtol()
**			and should not beused in new code.
*/
int	ft_atoi(const char *nptr)
{
	int				pos;
	int				sign;
	unsigned long	value;

	pos = 0;
	sign = 1;
	value = 0;
	skipspace_and_checksign((char *)nptr, &pos, &sign);
	while (nptr[pos] && ('0' <= nptr[pos] && nptr[pos] <= '9'))
	{
		if ((sign == 1) && ((922337203685477580ul < value)
				|| (value == 922337203685477580ul && '7' < nptr[pos])))
			return (-1);
		if ((sign == -1) && ((922337203685477580ul < value)
				|| ((value == 922337203685477580ul) && '8' < nptr[pos])))
			return (0);
		value *= 10;
		value += nptr[pos] - '0';
		pos++;
	}
	return ((int)value * sign);
}
