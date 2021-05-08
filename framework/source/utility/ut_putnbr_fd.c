/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 02:05:05 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/08 23:41:47 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libunit.h"

static void	recursive_putnbr_fd(long n, int fd)
{
	if (n < 0)
	{
		ut_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		recursive_putnbr_fd(n / 10, fd);
		recursive_putnbr_fd(n % 10, fd);
	}
	else
		ut_putchar_fd(n + '0', fd);
}

/*!
** @brief	Outputs the integer 'n' to the given file descriptor.
** @param	n: The integet to output.
** @param	fd: The file descriptor on which to write.
** @return	none
*/
void	ut_putnbr_fd(int n, int fd)
{
	long	long_n;

	if (fd < 0)
		return ;
	long_n = (long)n;
	recursive_putnbr_fd(long_n, fd);
}
