/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_space_char_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 04:47:50 by tarata            #+#    #+#             */
/*   Updated: 2021/05/12 05:14:12 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isdigit.h"

int	isdigit_space_char_test(void)
{
	if (!!ft_isdigit('\t') == !!isdigit('\t'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
