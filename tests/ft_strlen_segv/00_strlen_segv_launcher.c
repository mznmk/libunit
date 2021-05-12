/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 17:50:36 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen_segv.h"

int	strlen_segv_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_strlen_segv");
	add_unittest(&unittest, "TRUE Test - returns OK",
		&strlen_segv_true_test_return_ok);
	add_unittest(&unittest, "FALSE Test - returns OK",
		&strlen_segv_false_test_return_ok);
	add_unittest(&unittest, "TRUE Test - returns SEGV",
		&strlen_segv_true_test_return_segv);
	return (run_unittests(&unittest));
}
