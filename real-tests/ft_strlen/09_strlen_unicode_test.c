/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_unicode_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:50:58 by tarata            #+#    #+#             */
/*   Updated: 2021/05/11 01:51:43 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int unicode_char_test(void)
{
	if (ft_strlen("ああああああ") == strlen("ああああああ"))
    	return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
