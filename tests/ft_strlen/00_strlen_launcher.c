/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 23:36:28 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int	strlen_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_strlen");
	add_unittest(&unittest, "TRUE Test - returns OK",
		&strlen_true_test_return_ok_a);
	add_unittest(&unittest, "TRUE Test - returns OK",
		&strlen_true_test_return_ok_b);
	add_unittest(&unittest, "TRUE Test - returns SEGV",
		&strlen_true_test_return_segv);
	return (run_unittests(&unittest));
}
