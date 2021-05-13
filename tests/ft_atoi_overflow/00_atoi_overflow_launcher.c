/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_overflow_launcher.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/13 19:03:18 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi_overflow.h"

int	atoi_overflow_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_atoi_overflow (Bonus)");
	add_unittest(&unittest, "TRUE Test - returns TRUE",
		&atoi_overflow_true_test_return_true);
	add_unittest(&unittest, "TRUE Test - returns FPE",
		&atoi_overflow_true_test_return_fpe);
	return (run_unittests(&unittest));
}
