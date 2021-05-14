/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_atoi_bigsize_number.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:31:04 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 18:43:17 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_bigsize_number(void)
{
	if (ft_atoi("123456789") == atoi("123456789"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
