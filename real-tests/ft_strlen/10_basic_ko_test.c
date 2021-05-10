/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_basic_ko_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:58:29 by tarata            #+#    #+#             */
/*   Updated: 2021/05/11 02:05:47 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int basic_ko_test(void)
{
	if (ft_strlen("aaaa") == strlen("bbbbb"))
    	return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
