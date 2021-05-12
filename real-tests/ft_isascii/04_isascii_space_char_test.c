/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_isascii_space_char_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 04:47:50 by tarata            #+#    #+#             */
/*   Updated: 2021/05/12 07:11:11 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isascii.h"

int	isascii_space_char_test(void)
{
	if (!!ft_isascii('\t') == !!isascii('\t'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
