/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 20:53:48 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(const char *nptr)
{
	int		pos;
	int		sign;
	int		value;

	pos = 0;
	sign = 1;
	value = 0;
	skipspace_and_checksign((char *)nptr, &pos, &sign);
	while (nptr[pos] && ('0' <= nptr[pos] && nptr[pos] <= '9'))
	{
		value *= 10;
		value += (nptr[pos] - '0');
		pos++;
	}
	return ((int)value * sign);
}
