/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_terminated_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:47:30 by tarata            #+#    #+#             */
/*   Updated: 2021/05/11 01:48:53 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int only_terminated_char_test(void)
{
	if (ft_strlen("\0") == strlen("\0"))
    	return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
