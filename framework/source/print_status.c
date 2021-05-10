/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:43:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 14:23:07 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"

/*!
** @brief	print framework header (42UnitTests)
** @param	none
** @return	none
*/
void	print_framework_header(void)
{
	ut_putstr_fd(ESC_FNT_BOLD, STDOUT_FILENO);
	ut_putstr_fd(ESC_CLR_CYAN, STDOUT_FILENO);
	ut_putendl_fd(" _  _ ___  _    _       _ _ _______        _       ",
		STDOUT_FILENO);
	ut_putendl_fd("| || |__ \\| |  | |     (_) |__   __|      | |      ",
		STDOUT_FILENO);
	ut_putendl_fd("| || |_ ) | |  | |_ __  _| |_ | | ___  ___| |_ ___ ",
		STDOUT_FILENO);
	ut_putendl_fd("|__   _/ /| |  | | '_ \\| | __|| |/ _ \\/ __| __/ __|",
		STDOUT_FILENO);
	ut_putendl_fd("   | |/ /_| |__| | | | | | |_ | |  __/\\__ \\ |_\\__ \\",
		STDOUT_FILENO);
	ut_putendl_fd("   |_|____|\\____/|_| |_|_|\\__||_|\\___||___/\\__|___/",
		STDOUT_FILENO);
	ut_putstr_fd(ESC_CLR_RESET, STDOUT_FILENO);
	ut_putstr_fd(ESC_FNT_RESET, STDOUT_FILENO);
}

/*!
** @brief	print unittests header
** @param	tested_function_name:	tested function name (ex: ft_strlen ...)
** @return	none
*/
void	print_unittests_header(char *tested_function_name)
{
	int		testname_width;

	testname_width = ut_strlen(tested_function_name) + 8;
	while (testname_width-- > 0)
		ut_putstr_fd("=", STDOUT_FILENO);
	ut_putendl_fd("", STDOUT_FILENO);
	ut_putstr_fd("| < ", STDOUT_FILENO);
	ut_putstr_fd(ESC_FNT_BOLD, STDOUT_FILENO);
	ut_putstr_fd(tested_function_name, STDOUT_FILENO);
	ut_putstr_fd(ESC_FNT_RESET, STDOUT_FILENO);
	ut_putendl_fd(" > |", STDOUT_FILENO);
	ut_putendl_fd("===================================================",
		STDOUT_FILENO);
}

/*!
** @brief	print test status
** @param	testname: 		unittest name
** @param	testresult:		unittest result (ex: OK/KO/SEGV/BUSE/...)
** @param	resultcolor:	unittest result color
** @return	none
*/
void	print_test_status(char *testname, char *testresult, char *resultcolor)
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
** @brief	print test score (success/failure/total)
** @param	test_success:	test success counts
** @param	test_failure:	test failure counts
** @return	none
*/
void	print_test_score(int test_success, int test_failure)
{
	ut_putstr_fd(ESC_FNT_BOLD, STDOUT_FILENO);
	ut_putendl_fd("---------------------------------------------------",
		STDOUT_FILENO);
	if (test_failure)
		ut_putstr_fd(ESC_CLR_RED, STDOUT_FILENO);
	else
		ut_putstr_fd(ESC_CLR_GREEN, STDOUT_FILENO);
	ut_putstr_fd("[ success: ", STDOUT_FILENO);
	ut_putnbr_fd(test_success, STDOUT_FILENO);
	ut_putstr_fd(" failure: ", STDOUT_FILENO);
	ut_putnbr_fd(test_failure, STDOUT_FILENO);
	ut_putstr_fd(" / total: ", STDOUT_FILENO);
	ut_putnbr_fd(test_success + test_failure, STDOUT_FILENO);
	ut_putendl_fd(" ]", STDOUT_FILENO);
	ut_putstr_fd(ESC_CLR_RESET, STDOUT_FILENO);
	ut_putendl_fd("===================================================",
		STDOUT_FILENO);
	ut_putstr_fd(ESC_FNT_RESET, STDOUT_FILENO);
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
