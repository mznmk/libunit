/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_isalpha_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/12 07:03:24 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isalpha.h"

int	isalpha_basic_test(void)
{
	if (!!ft_isalpha('A') == !!isalpha('A'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
