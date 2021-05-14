/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_atoi_minus_sign_in_number.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:46:56 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 18:47:01 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_minus_sign_in_number(void)
{
	if (ft_atoi("12-34") == atoi("12-34"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
