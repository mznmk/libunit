/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_isalnum_nonalnum_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 04:22:43 by tarata            #+#    #+#             */
/*   Updated: 2021/05/12 07:02:22 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isalnum.h"

int	isalnum_nonalnum_test(void)
{
	if (!!ft_isalnum('\n') == !!isalnum('\n'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
