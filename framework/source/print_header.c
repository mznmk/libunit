/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_header.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:31:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 14:35:16 by mmizuno          ###   ########.fr       */
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
