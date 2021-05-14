/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_atoi_smallsize_number.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:29:32 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 18:42:13 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_smallsize_number(void)
{
	if (ft_atoi("123") == atoi("123"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
