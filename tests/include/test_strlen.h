/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 17:44:38 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_STRLEN_H
# define TEST_STRLEN_H

/*
** ================================== library ==================================
*/

# include <string.h>

# include "../../framework/include/libunit.h"
# include "tested_functions.h"

/*
** =========================== prototype declaration ===========================
*/

int		strlen_launcher(void);
int		strlen_true_test_return_ok(void);
int		strlen_false_test_return_ok(void);
int		strlen_true_test_return_segv(void);

#endif
