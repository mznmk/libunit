/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcpy_true_test_return_buse.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:29 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/13 06:46:08 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strcpy.h"

int	strcpy_true_test_return_buse(void)
{
	char	*dest_ft;
	char	*dest_libc;

	dest_ft = "";
	dest_libc = "";
	if (ft_strcpy(dest_ft, "HelloWork") == strcpy(dest_libc, "HelloWork"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
