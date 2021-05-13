/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/13 18:51:16 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_STRCPY_H
# define TEST_STRCPY_H

/*
** ================================== library ==================================
*/

# include <string.h>

# include "../../framework/include/libunit.h"
# include "tested_functions.h"

/*
** =========================== prototype declaration ===========================
*/

int		strcpy_launcher(void);
int		strcpy_true_test_return_buse(void);

#endif
