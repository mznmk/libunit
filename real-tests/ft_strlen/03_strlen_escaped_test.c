/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen_escaped_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:37:23 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 19:42:43 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int	only_escaped_char_test(void)
{
	if (ft_strlen("\"\\\'") == strlen("\"\\\'"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
