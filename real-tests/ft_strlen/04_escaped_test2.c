/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_escaped_test2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:40:56 by tarata            #+#    #+#             */
/*   Updated: 2021/05/11 01:49:11 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int mix_escaped_char_test(void)
{
	if (ft_strlen("aaa\'b\'ccc") == strlen("aaa\'b\'ccc"))
    	return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
