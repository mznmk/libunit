/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_negative_number_a.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 23:22:40 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_negative_number_a(void)
{
	if (ft_atoi("-2") == atoi("-2"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
