/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_segv_launcher.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 23:36:30 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen_segv.h"

int	strlen_segv_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_strlen_segv");
	add_unittest(&unittest, "TRUE Test - returns KO",
		&strlen_segv_true_test_return_ko_a);
	add_unittest(&unittest, "TRUE Test - returns KO",
		&strlen_segv_true_test_return_ko_b);
	add_unittest(&unittest, "TRUE Test - returns SEGV",
		&strlen_segv_true_test_return_segv);
	return (run_unittests(&unittest));
}
