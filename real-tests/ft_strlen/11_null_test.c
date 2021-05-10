/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:52:34 by tarata            #+#    #+#             */
/*   Updated: 2021/05/11 03:31:57 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int null_test(void)
{
	if (ft_strlen(NULL) == 0)
    	return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
