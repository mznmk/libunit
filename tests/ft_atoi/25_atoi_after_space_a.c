/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25_atoi_after_space_a.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 21:26:46 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_after_space_a(void)
{
	if (ft_atoi("-123 \t\v\f\r\n") == atoi("-123 \t\v\f\r\n"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
