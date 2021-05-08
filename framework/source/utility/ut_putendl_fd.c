/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 02:03:43 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/08 23:41:42 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libunit.h"

/*!
** @brief	Outputs the string 's' to the given file descriptor,
**			followed by a newline.
** @param	s: The string to output.
** @param	fd: The file descriptor on which to write.
** @return	none
*/
void	ut_putendl_fd(char *s, int fd)
{
	if (fd < 0 || !s)
		return ;
	write(fd, s, ut_strlen(s));
	write(fd, &("\n"), 1);
}
