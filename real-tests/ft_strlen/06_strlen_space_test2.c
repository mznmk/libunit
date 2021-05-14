/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_strlen_space_test2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:45:01 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 19:41:53 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int	mix_space_char_test(void)
{
	if (ft_strlen("aaa\t\vbb\r\fccc\n") == strlen("aaa\t\vbb\r\fccc\n"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
