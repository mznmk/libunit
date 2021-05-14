/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_atoi_intmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:28:17 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 18:34:10 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_intmin(void)
{
	if (ft_atoi("-2147483648") == atoi("-2147483648"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
