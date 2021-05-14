/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_atoi_alphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:28:42 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 18:39:50 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_alphabet(void)
{
	if (ft_atoi("abcd") == atoi("abcd"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
