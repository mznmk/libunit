/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   24_atoi_before_space_a.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 21:26:12 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_before_space_a(void)
{
	if (ft_atoi("\t\v\f\r\n 123") == atoi("\t\v\f\r\n 123"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
