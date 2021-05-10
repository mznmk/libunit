/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memmove_basic_text_a.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 00:04:52 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_memmove.h"

int	memmove_basic_text_a(void)
{
	char	*src;
	char	dest_ft[100];
	char	dest_libc[100];
	size_t	len;

	src = "Once upon a time, there lived an old couple in a small village.\0";
	len = strlen(src);
	ft_memmove(dest_ft, src, len);
	memmove(dest_libc, src, len);
	if (memcmp(dest_ft, dest_libc, len) == 0)
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
