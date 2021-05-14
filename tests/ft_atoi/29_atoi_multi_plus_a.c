/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   29_atoi_multi_plus_a.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 20:58:12 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_multi_plus_a(void)
{
	if (ft_atoi("+++123") == atoi("+++123"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
