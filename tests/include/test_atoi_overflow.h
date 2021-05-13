/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 17:44:38 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_ATOI_OVERFLOW_H
# define TEST_ATOI_OVERFLOW_H

/*
** ================================== library ==================================
*/

# include <stdlib.h>

# include "../../framework/include/libunit.h"
# include "tested_functions.h"

/*
** =========================== prototype declaration ===========================
*/

int		atoi_overflow_launcher(void);
int		atoi_overflow_true_test_return_true(void);
int		atoi_overflow_true_test_return_fpe(void);

#endif
