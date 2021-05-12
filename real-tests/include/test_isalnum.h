/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 21:01:17 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_ISALNUM_H
# define TEST_ISALNUM_H

/*
** ================================== library ==================================
*/

# include <ctype.h>

# include "libft.h"
# include "../../framework/include/libunit.h"

/*
** =========================== prototype declaration ===========================
*/

int		isalnum_launcher(void);
int		isalnum_basic_test(void);
int		isalnum_number_test(void);
int		isalnum_lowercase_test(void);
int		isalnum_uppercase_test(void);
int		isalnum_nonalnum_test(void);

#endif
