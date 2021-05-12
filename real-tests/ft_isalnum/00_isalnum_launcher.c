/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isalnum_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/12 06:39:27 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isalnum.h"

int	isalnum_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_isalnum");
	add_unittest(&unittest, "Basic test", &isalnum_basic_test);
	add_unittest(&unittest, "Number test", &isalnum_number_test);
	add_unittest(&unittest, "Lowwercase test", &isalnum_lowercase_test);
	add_unittest(&unittest, "Uppercase test", &isalnum_uppercase_test);
	add_unittest(&unittest, "Non alnum test", &isalnum_nonalnum_test);
	return (run_unittests(&unittest));
}
