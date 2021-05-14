/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_atoi_intmax.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:27:58 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 19:25:50 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_intmax(void)
{
	if (ft_atoi("2147483647") == atoi("2147483647"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
