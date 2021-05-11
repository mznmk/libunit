/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_unittests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:43:42 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 19:27:10 by mmizuno          ###   ########.fr       */
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
** @brief	run all unittests
** @param	unittests:	bind all unittests
** @return	none
*/
static void	run_all_unittests(
				t_unittest **unittests, int *test_success, int *test_failure)
{
	t_unittest	*unittest;
	pid_t		pid;

	unittest = *unittests;
	while (unittest)
	{
		pid = fork();
		if (pid == 0)
			run_child_process(unittest);
		else if (pid > 0)
			run_parent_process(unittest, test_success, test_failure);
		else
			exit_unittests(unittests, "error: fail to execute unittest");
		unittest = unittest->next;
	}
}

/*!
** @brief	launch all unittests
** @param	unittests:	bind all unittests
** @return	none
*/
int	run_unittests(t_unittest **unittests)
{
	int		test_success;
	int		test_failure;

	test_success = 0;
	test_failure = 0;
	run_all_unittests(unittests, &test_success, &test_failure);
	clear_unittests(unittests);
	print_unittests_score(test_success, test_failure);
	if (test_failure)
		return (STAT_FAILURE);
	return (STAT_SUCCESS);
}
