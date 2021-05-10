/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strnstr_basic_text_a.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 00:30:16 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strnstr.h"

int	strnstr_basic_text_a(void)
{
	char	*str_big;
	char	*str_little;
	size_t	len;

	str_big = "Once upon a time, there lived an old couple in a small village.";
	str_little = " a";
	len = strlen(str_little);
	if (ft_strnstr(str_big, str_little, len)
		== strnstr(str_big, str_little, len))
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
