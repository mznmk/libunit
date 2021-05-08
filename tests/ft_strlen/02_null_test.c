/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:29 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/09 00:06:57 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int	strlen_null_test(void)
{
	if (ft_strlen("NULL") == strlen("NULL"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
