/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_atoi_zero_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 19:41:49 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_zero_c(void)
{
	if (ft_atoi("0000000000") == atoi("0000000000"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
