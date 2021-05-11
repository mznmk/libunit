/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_true_test_return_ok.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 19:31:27 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen_segv.h"

int	strlen_true_test_return_ok(void)
{
	if (ft_strlen_segv("HelloWork") == strlen("HelloWork"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
