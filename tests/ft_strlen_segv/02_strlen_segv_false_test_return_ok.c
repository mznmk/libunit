/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_false_test_return_ok.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 17:54:18 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen_segv.h"

int	strlen_segv_false_test_return_ok(void)
{
	if (ft_strlen_segv("HelloWork") != strlen("HelloWorld"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
