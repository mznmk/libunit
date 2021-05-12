/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 21:01:17 by mmizuno          ###   ########.fr       */
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
