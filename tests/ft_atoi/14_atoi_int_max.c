/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_atoi_int_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 19:43:47 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_int_max(void)
{
	if (ft_atoi("2147483647") == atoi("2147483647"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
