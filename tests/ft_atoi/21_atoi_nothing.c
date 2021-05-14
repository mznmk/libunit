/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21_atoi_nothing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 19:45:33 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_nothing(void)
{
	if (ft_atoi("") == atoi(""))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
