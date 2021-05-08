/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 01:43:09 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/08 23:41:40 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libunit.h"

/*!
** @brief	Outputs the character 'c' to the given file descriptor.
** @param	c: The character to output.
** @param	fd: The file descriptor on which to write.
** @return	none
*/
void	ut_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
