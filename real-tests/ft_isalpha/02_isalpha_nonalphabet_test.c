/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_isalpha_nonalphabet_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 04:35:28 by tarata            #+#    #+#             */
/*   Updated: 2021/05/12 07:03:49 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isalpha.h"

int	isalpha_nonalphabet_test(void)
{
	if (!!ft_isalpha('0') == !!isalpha('0'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
