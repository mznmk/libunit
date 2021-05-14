/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlen_segv_true_test_return_ok_b.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 23:33:12 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen_segv.h"

int	strlen_segv_true_test_return_ko_b(void)
{
	if (ft_strlen_segv("My name is Tokugawa Ieyasu!")
		== strlen("My name is Tokugawa Ieyasu!"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
