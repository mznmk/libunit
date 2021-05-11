/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_parent_process.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:50:28 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 20:53:37 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"

/*!
** @brief	run parent process (helper function)
** @param	unittest:		current unittest
** @param	status:			process status
** @return	none
*/
static void	run_parent_process_normal_term(t_unittest *unittest, int status)
{
	if (WEXITSTATUS(status) == 0)
		print_unittest_status(unittest->testname, "OK", ESC_CLR_GREEN);
	else if (WEXITSTATUS(status) == SIGALRM)
		print_unittest_status(unittest->testname, "TOUT", ESC_CLR_YELLOW);
	else
		print_unittest_status(unittest->testname, "KO", ESC_CLR_RED);
}

static void	run_parent_process_signal_term(t_unittest *unittest, int status)
{
	if (WTERMSIG(status) == SIGSEGV)
		print_unittest_status(unittest->testname, "SEGV", ESC_CLR_YELLOW);
	if (WTERMSIG(status) == SIGBUS)
		print_unittest_status(unittest->testname, "BUSE", ESC_CLR_YELLOW);
	if (WTERMSIG(status) == SIGABRT)
		print_unittest_status(unittest->testname, "ABRT", ESC_CLR_YELLOW);
	if (WTERMSIG(status) == SIGFPE)
		print_unittest_status(unittest->testname, "FPE", ESC_CLR_YELLOW);
}

/*!
** @brief	run parent process
** @param	unittest:		current unittest
** @param	test_success:	test success count (total)
** @param	test_failure:	test failure count (total)
** @return	none
*/
void	run_parent_process(
			t_unittest *unittest, int *test_success, int *test_failure)
{
	int		status;

	wait(&status);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
		(*test_success)++;
	else
		(*test_failure)++;
	if (WIFEXITED(status))
		run_parent_process_normal_term(unittest, status);
	else if (WIFSIGNALED(status))
		run_parent_process_signal_term(unittest, status);
}
