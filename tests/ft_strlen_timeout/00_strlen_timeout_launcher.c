/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_timeout_launcher.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 21:13:02 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen_timeout.h"

int	strlen_timeout_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_strlen_timeout(Bonus)");
	add_unittest(&unittest, "TRUE Test - returns TOUT",
		&strlen_timeout_true_test_return_timeout);
	return (run_unittests(&unittest));
}
