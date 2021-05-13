/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_dividebyzero_true_test_return_fpe.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:29 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 00:18:31 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi_dividebyzero.h"

int	atoi_dividebyzero_true_test_return_fpe(void)
{
	int		value_ft;
	int		value_libc;
	char	*number;

	number = "123456789012345678901234567890123456789012345678901234567890";
	value_ft = ft_atoi_dividebyzero(number);
	value_libc = atoi(number);
	if (value_ft == value_libc)
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
