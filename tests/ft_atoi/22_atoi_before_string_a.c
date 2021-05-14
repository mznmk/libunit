/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   22_atoi_before_string_a.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 21:27:20 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_before_string_a(void)
{
	if (ft_atoi("My name is Toyotomi Hideyoshi 123")
		== atoi("My name is Toyotomi Hideyoshi 123"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
