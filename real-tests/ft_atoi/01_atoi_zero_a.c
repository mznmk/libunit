/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_zero_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 23:22:33 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_zero_a(void)
{
	if (ft_atoi("0") == atoi("0"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
