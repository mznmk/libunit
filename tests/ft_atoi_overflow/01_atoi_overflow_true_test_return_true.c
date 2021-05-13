/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_overflow_true_test_return_true.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:29 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/13 13:00:08 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi_overflow.h"

int	atoi_overflow_true_test_return_true(void)
{
	int		value_ft;
	int		value_libc;
	char	*number;

	number = "1234567890";
	value_ft = ft_atoi_overflow(number);
	value_libc = atoi(number);
	if (value_ft == value_libc)
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
