/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:43:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 14:52:07 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"

/*!
** @brief	print unittest status
** @param	testname: 		unittest name
** @param	testresult:		unittest result (ex: OK/KO/SEGV/BUSE/...)
** @param	resultcolor:	unittest result color
** @return	none
*/
void	print_unittest_status(
			char *testname, char *testresult, char *resultcolor)
{
	int		padding_length;

	ut_putstr_fd(testname, STDOUT_FILENO);
	padding_length = TESTNAME_LENGTH - ut_strlen(testname);
	while (padding_length-- > 0)
		ut_putstr_fd(" ", STDOUT_FILENO);
	ut_putstr_fd(": ", STDOUT_FILENO);
	ut_putstr_fd(ESC_FNT_BOLD, STDOUT_FILENO);
	ut_putstr_fd(resultcolor, STDOUT_FILENO);
	ut_putstr_fd("[ ", STDOUT_FILENO);
	ut_putstr_fd(testresult, STDOUT_FILENO);
	ut_putendl_fd(" ]", STDOUT_FILENO);
	ut_putstr_fd(ESC_CLR_RESET, STDOUT_FILENO);
	ut_putstr_fd(ESC_FNT_RESET, STDOUT_FILENO);
}

/*!
** @brief	print unittests number (digit == 2) (helper function)
** @param	number:	wanna print number
** @return	none
*/
static void	print_unittests_number(int number)
{
	if (number < 10)
		ut_putstr_fd(" ", STDOUT_FILENO);
	ut_putnbr_fd(number, STDOUT_FILENO);
}

/*!
** @brief	print unittests result (helper function)
** @param	number:	wanna print number
** @return	none
*/
static void	print_unittests_result(int test_failure)
{
	ut_putstr_fd(": ", STDOUT_FILENO);
	if (test_failure)
	{
		ut_putstr_fd(ESC_CLR_RED, STDOUT_FILENO);
		ut_putendl_fd("[ KO ]", STDOUT_FILENO);
	}
	else
	{
		ut_putstr_fd(ESC_CLR_GREEN, STDOUT_FILENO);
		ut_putendl_fd("[ OK ]", STDOUT_FILENO);
	}
	ut_putstr_fd(ESC_CLR_RESET, STDOUT_FILENO);
}

/*!
** @brief	print unittests score (success/failure/total)
** @param	test_success:	test success counts
** @param	test_failure:	test failure counts
** @return	none
*/
void	print_unittests_score(int test_success, int test_failure)
{
	ut_putendl_fd("---------------------------------------------------",
		STDOUT_FILENO);
	ut_putstr_fd(ESC_FNT_BOLD, STDOUT_FILENO);
	ut_putstr_fd("[ success: ", STDOUT_FILENO);
	print_unittests_number(test_success);
	ut_putstr_fd(" failure: ", STDOUT_FILENO);
	print_unittests_number(test_failure);
	ut_putstr_fd(" / total: ", STDOUT_FILENO);
	print_unittests_number(test_success + test_failure);
	ut_putstr_fd(" ]  ", STDOUT_FILENO);
	print_unittests_result(test_failure);
	ut_putstr_fd(ESC_FNT_RESET, STDOUT_FILENO);
	ut_putendl_fd("===================================================",
		STDOUT_FILENO);
}

/*!
** @brief	print error message
** @param	error_message:	wanna print error message
** @return	none
*/
void	print_error_message(char *error_message)
{
	ut_putstr_fd(ESC_CLR_YELLOW, STDOUT_FILENO);
	ut_putstr_fd("[ error: ", STDOUT_FILENO);
	ut_putstr_fd(error_message, STDOUT_FILENO);
	ut_putendl_fd(" ]", STDOUT_FILENO);
	ut_putstr_fd(ESC_CLR_RESET, STDOUT_FILENO);
}
