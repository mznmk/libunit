/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_atoi_middlesize_number.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:29:39 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 18:42:39 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_middlesize_number(void)
{
	if (ft_atoi("123456") == atoi("123456"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
