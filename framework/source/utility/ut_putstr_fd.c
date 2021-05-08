/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 02:01:48 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/08 23:41:50 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libunit.h"

/*!
** @brief	Outputs the string 's' to the given file descriptor.
** @param	s: The string to output.
** @param	fd: The file descriptor on which to write.
** @return	none
*/
void	ut_putstr_fd(char *s, int fd)
{
	if (fd < 0 || !s)
		return ;
	write(fd, s, ut_strlen(s));
}
