/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_atoi_alphabet_number.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:28:50 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 18:40:09 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_alphabet_number(void)
{
	if (ft_atoi("abcd1234") == atoi("abcd1234"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
