/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_isalnum_number_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 04:23:09 by tarata            #+#    #+#             */
/*   Updated: 2021/05/12 07:01:35 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isalnum.h"

int	isalnum_number_test(void)
{
	if (!!ft_isalnum('0') == !!isalnum('0'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
