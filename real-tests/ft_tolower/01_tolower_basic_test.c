/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_tolower_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/12 07:11:48 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_tolower.h"

int	tolower_basic_test(void)
{
	if (ft_tolower('A') == tolower('A'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
