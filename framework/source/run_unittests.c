/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_unittests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:43:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/08 23:44:28 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"

/*!
** @brief	exit unittests
** @param	unittests:		bind all unittests
** @param	error_message:	wanna print error message
** @return	none
*/
void	exit_unittests(t_unittest **unittests, char *error_message)
{
	print_error_message(error_message);
	clear_unittests(unittests);
	exit(STAT_FAILURE);
}

/*!
** @brief	run child process
** @param	unittest:	current unittest
** @return	none
*/
void	run_child_process(t_unittest *unittest)
{
	int	status;

	status = unittest->testfunc();
	exit(status);
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
	{
		if (WEXITSTATUS(status) == 0)
			print_test_status(unittest->testname, "OK", ESC_CLR_GREEN);
		else
			print_test_status(unittest->testname, "KO", ESC_CLR_RED);
	}
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			print_test_status(unittest->testname, "SEGV", ESC_CLR_MAGENTA);
		if (WTERMSIG(status) == SIGBUS)
			print_test_status(unittest->testname, "BUSE", ESC_CLR_MAGENTA);
	}	
}

/*!
** @brief	run all unittests
** @param	unittests:	bind all unittests
** @return	none
*/
int	run_unittests(t_unittest **unittests)
{
	t_unittest	*unittest;
	pid_t		pid;
	int			test_success;
	int			test_failure;

	unittest = *unittests;
	test_success = 0;
	test_failure = 0;
	while (unittest)
	{
		pid = fork();
		if (pid == 0)
			run_child_process(unittest);
		else if (pid > 0)
			run_parent_process(unittest, &test_success, &test_failure);
		else
			exit_unittests(unittests, "error: fail to execute unittest");
		unittest = unittest->next;
	}
	print_test_score(test_success, test_failure);
	if (test_failure)
		return (STAT_FAILURE);
	return (STAT_SUCCESS);
}

/*!
** @brief	launch all unittests
** @param	unittests:	bind all unittests
** @return	none
*/
int	launch_unittests(t_unittest **unittests)
{
	int		status;

	status = run_unittests(unittests);
	clear_unittests(unittests);
	return (status);
}
