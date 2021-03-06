/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 19:46:30 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int	strlen_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_strlen");
	add_unittest(&unittest, "Basic test", &strlen_basic_test);
	add_unittest(&unittest, "Long str test", &long_str_test);
	add_unittest(&unittest, "Escaped test", &only_escaped_char_test);
	add_unittest(&unittest, "Escaped test2", &mix_escaped_char_test);
	add_unittest(&unittest, "Space test", &only_space_char_test);
	add_unittest(&unittest, "Space test2", &mix_space_char_test);
	add_unittest(&unittest, "Terminated test", &only_terminated_char_test);
	add_unittest(&unittest, "Terminated test2", &mix_terminated_char_test);
	add_unittest(&unittest, "Basic KO test", &basic_ko_test);
	return (run_unittests(&unittest));
}
