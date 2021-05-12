/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_isascii_number_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 04:45:20 by tarata            #+#    #+#             */
/*   Updated: 2021/05/12 07:10:33 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isascii.h"

int	isascii_number_test(void)
{
	if (!!ft_isascii('1') == !!isascii('1'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
