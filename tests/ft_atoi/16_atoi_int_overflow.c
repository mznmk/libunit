/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_atoi_int_overflow.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 19:44:16 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_int_overflow(void)
{
	if (ft_atoi("2147483648") == atoi("2147483648"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
