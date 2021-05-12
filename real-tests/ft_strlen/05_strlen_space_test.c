/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_space_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:43:27 by tarata            #+#    #+#             */
/*   Updated: 2021/05/11 01:49:07 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int only_space_char_test(void)
{
	if (ft_strlen("\t\v\r\f\n") == strlen("\t\v\r\f\n"))
    	return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
