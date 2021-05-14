/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 21:06:29 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_ATOI_H
# define TEST_ATOI_H

/*
** ================================== library ==================================
*/

# include <stdlib.h>

# include "../../framework/include/libunit.h"
# include "tested_functions.h"

/*
** =========================== prototype declaration ===========================
*/

int		atoi_launcher(void);
int		atoi_zero_a(void);
int		atoi_zero_b(void);
int		atoi_zero_c(void);
int		atoi_number_a(void);
int		atoi_number_b(void);
int		atoi_number_c(void);
int		atoi_positive_number_a(void);
int		atoi_positive_number_b(void);
int		atoi_positive_number_c(void);
int		atoi_negative_number_a(void);
int		atoi_negative_number_b(void);
int		atoi_negative_number_c(void);
int		atoi_int_min(void);
int		atoi_int_max(void);
int		atoi_int_underflow(void);
int		atoi_int_overflow(void);
int		atoi_long_min(void);
int		atoi_long_max(void);
int		atoi_long_underflow(void);
int		atoi_long_overflow(void);
int		atoi_nothing(void);
int		atoi_before_string_a(void);
int		atoi_after_string_a(void);
int		atoi_before_space_a(void);
int		atoi_after_space_a(void);
int		atoi_before_invisible_a(void);
int		atoi_after_invisible_a(void);
int		atoi_multi_minus_a(void);
int		atoi_multi_plus_a(void);

#endif
