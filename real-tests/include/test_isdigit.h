/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 19:49:40 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_ISDIGIT_H
# define TEST_ISDIGIT_H

/*
** ================================== library ==================================
*/

# include <ctype.h>

# include "libft.h"
# include "../../framework/include/libunit.h"

/*
** =========================== prototype declaration ===========================
*/

int		isdigit_launcher(void);
int		isdigit_basic_test(void);
int		isdigit_alphabet_test(void);
int		isdigit_space_char_test(void);

#endif
