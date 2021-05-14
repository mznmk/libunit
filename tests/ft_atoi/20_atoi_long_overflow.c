/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20_atoi_long_overflow.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 19:45:24 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_long_overflow(void)
{
	if (ft_atoi("9223372036854775808") == atoi("9223372036854775808"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
