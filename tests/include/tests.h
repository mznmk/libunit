/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:59:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 00:20:29 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

/*
** ================================== define ===================================
*/

# define STAT_SUCCESS	0
# define STAT_FAILURE	-1

/*
** ================================== library ==================================
*/

# include "test_strlen.h"
# include "test_strlen_segv.h"
# include "test_strlen_timeout.h"
# include "test_strcpy.h"
# include "test_atoi_dividebyzero.h"
# include "test_split_doublefree.h"

/*
** =========================== prototype declaration ===========================
*/

void	execute_tests(int *status);

#endif
