/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_atoi_space_character_number.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:29:04 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 19:38:55 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_space_character_number(void)
{
	if (ft_atoi(" 123") == atoi(" 123"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
