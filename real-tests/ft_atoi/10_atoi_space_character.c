/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_atoi_space_character.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:28:55 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 18:40:35 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_space_character(void)
{
	if (ft_atoi(" ") == atoi(" "))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
