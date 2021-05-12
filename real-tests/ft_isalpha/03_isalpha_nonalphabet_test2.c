/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_isalpha_nonalphabet_test2.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 04:35:55 by tarata            #+#    #+#             */
/*   Updated: 2021/05/12 07:04:15 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isalpha.h"

int	isalpha_nonalphabet_test2(void)
{
	if (!!ft_isalpha('\0') == !!isalpha('\0'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
