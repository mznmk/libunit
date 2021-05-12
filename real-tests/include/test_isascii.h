/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/12 06:40:53 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_ISASCII_H
# define TEST_ISASCII_H

/*
** ================================== library ==================================
*/

# include <ctype.h>

# include "libft.h"
# include "../../framework/include/libunit.h"

/*
** =========================== prototype declaration ===========================
*/

int		isascii_launcher(void);
int		isascii_basic_test(void);
int		isascii_number_test(void);
int		isascii_alphabet_test(void);
int		isascii_space_char_test(void);

#endif
