/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_isprint_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/12 06:59:16 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isprint.h"

int	ft_isprint_check(void)
{
	int	i;

	i = 0;
	while (i < 256)
	{
		if (!!ft_isprint(i) != !!isprint(i))
			return (0);
		i++;
	}
	return (1);
}

int	isprint_basic_test(void)
{
	
	if (ft_isprint_check())
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
