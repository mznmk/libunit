/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_isascii_alphabet_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 04:45:48 by tarata            #+#    #+#             */
/*   Updated: 2021/05/12 07:11:23 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isascii.h"

int	isascii_alphabet_test(void)
{
	if (!!ft_isascii('a') == !!isascii('a'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
