/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 05:48:12 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_STRLEN_H
# define TEST_STRLEN_H

/*
** ================================== library ==================================
*/

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# include "libft.h"
# include "../../framework/include/libunit.h"

/*
** =========================== prototype declaration ===========================
*/

int		strlen_launcher(void);
int		strlen_basic_test(void);
int		long_str_test(void);
int		only_escaped_char_test(void);
int		mix_escaped_char_test(void);
int 	only_space_char_test(void);
int		mix_space_char_test(void);
int 	only_terminated_char_test(void);
int		mix_terminated_char_test(void);
int 	unicode_char_test(void);
int 	basic_ko_test(void);
int 	null_test(void);
int 	buserror_test(void);

#endif
