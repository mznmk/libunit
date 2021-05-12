/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isdigit_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/12 06:37:34 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isdigit.h"

int	isdigit_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_isdigit");
	add_unittest(&unittest, "Basic test", &isdigit_basic_test);
	add_unittest(&unittest, "Alphabet test", &isdigit_alphabet_test);
	add_unittest(&unittest, "Space character test", &isdigit_space_char_test);
	return (run_unittests(&unittest));
}
