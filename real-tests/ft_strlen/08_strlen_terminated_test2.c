/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_strlen_terminated_test2.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:49:32 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 19:42:58 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int	mix_terminated_char_test(void)
{
	if (ft_strlen("aaa\0bbb\0ccc") == strlen("aaa\0bbb\0ccc"))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
