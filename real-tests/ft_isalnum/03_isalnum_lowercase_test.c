/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_isalnum_lowercase_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 06:42:05 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 19:43:48 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isalnum.h"

int	isalnum_lowercase_test(void)
{
	if (!!ft_isalnum('a') == !!isalnum('a'))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
