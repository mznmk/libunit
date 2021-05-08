/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:28:32 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/08 23:41:55 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libunit.h"

/*!
** @brief	The strlen() function computes the length of the string s.
** @return	The strlen() function returns the number of characters
**			that precede the terminating NUL character.
*/
size_t	ut_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
