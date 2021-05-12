/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isascii_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/12 06:34:34 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isascii.h"

int	isascii_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_isascii");
	add_unittest(&unittest, "Basic test", &isascii_basic_test);
	add_unittest(&unittest, "Number test", &isascii_number_test);
	add_unittest(&unittest, "Alphabet test", &isascii_alphabet_test);
	add_unittest(&unittest, "Space character test", &isascii_space_char_test);
	return (run_unittests(&unittest));
}
