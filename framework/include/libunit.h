/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:44:01 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/09 15:01:33 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

/*
** =================================== const ===================================
*/

# define STAT_SUCCESS	0
# define STAT_FAILURE	-1

# define TESTNAME_LENGTH	41

# define ESC_FNT_RESET		"\e[0m"
# define ESC_FNT_BOLD		"\e[1m"
# define ESC_FNT_FINE		"\e[2m"
# define ESC_FNT_ITALIC		"\e[3m"
# define ESC_FNT_ULINE		"\e[4m"

# define ESC_CLR_RESET		"\e[00m"
# define ESC_CLR_BLACK		"\e[30m"
# define ESC_CLR_RED		"\e[31m"
# define ESC_CLR_GREEN		"\e[32m"
# define ESC_CLR_YELLOW		"\e[33m"
# define ESC_CLR_BLUE		"\e[34m"
# define ESC_CLR_MAGENTA	"\e[35m"
# define ESC_CLR_CYAN		"\e[36m"
# define ESC_CLR_WHITE		"\e[37m"

/*
** ================================== library ==================================
*/

# include <sys/wait.h>
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

/*
** ================================== struct ===================================
*/

typedef struct s_unittest
{
	char				*testname;
	int					(*testfunc)(void);
	struct s_unittest	*next;
}						t_unittest;

/*
** =========================== prototype declaration ===========================
*/

size_t	ut_strlen(char *str);
void	ut_putchar_fd(char c, int fd);
void	ut_putendl_fd(char *s, int fd);
void	ut_putnbr_fd(int n, int fd);
void	ut_putstr_fd(char *s, int fd);

void	print_framework_header(void);
void	print_unittests_header(char *tested_function_name);
void	print_test_status(char *testname, char *testresult, char *color);
void	print_test_score(int test_success, int test_total);
void	print_error_message(char *error_message);

void	add_unittest(
			t_unittest **unittests, char *testname, int (*testfunc)(void));
void	clear_unittests(t_unittest **unittests);

int		run_unittests(t_unittest **unittests);
void	exit_unittests(t_unittest **unittests, char *error_message);

#endif
