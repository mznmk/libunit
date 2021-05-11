/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_true_test_return_segv.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:29 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 17:53:22 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen_segv.h"

int	strlen_segv_true_test_return_segv(void)
{
	if (ft_strlen_segv(NULL) == 0)
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
