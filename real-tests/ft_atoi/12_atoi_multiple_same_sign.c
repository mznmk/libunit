/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_atoi_multiple_same_sign.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:29:10 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 18:41:46 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_multiple_same_sign(void)
{
	if (ft_atoi("+++3") == atoi("+++3"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
