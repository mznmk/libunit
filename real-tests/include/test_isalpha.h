/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:31 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 21:01:17 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_ISALPHA_H
# define TEST_ISALPHA_H

/*
** ================================== library ==================================
*/

# include <ctype.h>

# include "libft.h"
# include "../../framework/include/libunit.h"

/*
** =========================== prototype declaration ===========================
*/

int		isalpha_launcher(void);
int		isalpha_basic_test(void);
int	    isalpha_nonalphabet_test(void);
int     isalpha_nonalphabet_test2(void);

#endif
