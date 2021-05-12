/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02 alphabet_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 05:05:20 by tarata            #+#    #+#             */
/*   Updated: 2021/05/12 05:14:11 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isdigit.h"

int	isdigit_alphabet_test(void)
{
	if (!!ft_isdigit('A') == !!isdigit('A'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
