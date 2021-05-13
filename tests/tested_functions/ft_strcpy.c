/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 01:17:52 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/13 12:03:02 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tested_functions.h"

char	*ft_strcpy(char *dst, const char *src)
{
	long	i;

	if (!src)
		return (dst);
	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[++i] = '\0';
	return (dst);
}
