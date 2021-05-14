/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 19:48:51 by tarata           ###   ########.fr       */
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
