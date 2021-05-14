/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   19_atoi_long_underflow.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 21:08:44 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_long_underflow(void)
{
	if (ft_atoi("-9223372036854775809") == atoi("-9223372036854775809"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
