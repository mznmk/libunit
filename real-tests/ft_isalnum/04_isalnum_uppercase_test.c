/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_isalnum_uppercase_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 04:23:04 by tarata            #+#    #+#             */
/*   Updated: 2021/05/12 07:02:03 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isalnum.h"

int	isalnum_uppercase_test(void)
{
	if (!!ft_isalnum('A') == !!isalnum('A'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
