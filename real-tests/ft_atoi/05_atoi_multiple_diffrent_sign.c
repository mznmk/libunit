/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_atoi_multiple_diffrent_sign.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:57:48 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 19:04:04 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_multiple_different_sign(void)
{
	if (ft_atoi("+-1") == atoi("+-1"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
