/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 21:01:17 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_ATOI_H
# define TEST_ATOI_H

/*
** ================================== library ==================================
*/

# include <string.h>

# include "libft.h"
# include "../../framework/include/libunit.h"

/*
** =========================== prototype declaration ===========================
*/

int		atoi_launcher(void);
int		atoi_zero_a(void);
int		atoi_positive_number_a(void);
int		atoi_negative_number_a(void);
int		atoi_intmin(void);
int		atoi_multiple_different_sign(void);
int		atoi_plus_sign_in_number(void);
int		atoi_minus_sign_in_number(void);
int		atoi_alphabet(void);
int		atoi_alphabet_number(void);
int		atoi_space_character(void);
int		atoi_space_character_number(void);
int		atoi_multiple_same_sign(void);
int		atoi_smallsize_number(void);
int		atoi_middlesize_number(void);
int		atoi_bigsize_number(void);
int		atoi_intmax(void);

#endif
