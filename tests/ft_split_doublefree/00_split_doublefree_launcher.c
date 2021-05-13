/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_split_doublefree_launcher.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/13 19:05:09 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_split_doublefree.h"

int	split_doublefree_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_split_doublefree (Bonus)");
	add_unittest(&unittest, "TRUE Test - returns ABRT",
		&split_doublefree_true_test_return_abrt);
	return (run_unittests(&unittest));
}
