/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_isalnum_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/12 07:01:02 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isalnum.h"

int	isalnum_basic_test(void)
{
	if (!!ft_isalnum('A') == !!isalnum('A'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
