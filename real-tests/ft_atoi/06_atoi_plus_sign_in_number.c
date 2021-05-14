/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_atoi_plus_sign_in_number.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:28:29 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 18:38:37 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_plus_sign_in_number(void)
{
	if (ft_atoi("12+34") == atoi("12+34"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
