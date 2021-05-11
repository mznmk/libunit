/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_child_process_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 20:24:48 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 20:53:40 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"

/*!
** @brief	exit process (as timeout)
** @param	unittests:	bind all unittests
** @return	none
*/
static void	exit_timeout(int signal)
{
	(void)signal;
	exit(SIGALRM);
}

/*!
** @brief	run child process
** @param	unittest:	current unittest
** @return	none
*/
void	run_child_process(t_unittest *unittest)
{
	int	status;

	signal(SIGALRM, &exit_timeout);
	alarm(TIMEOUT_SECOND);
	status = unittest->testfunc();
	exit(status);
}
