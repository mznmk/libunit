/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/12 04:40:16 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_isalpha.h"

int	isalpha_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_isalpha");
	add_unittest(&unittest, "Basic test", &isalpha_basic_test);
	add_unittest(&unittest, "Non alphabet test", &isalpha_nonalphabet_test);
	add_unittest(&unittest, "Non alphabet test2", &isalpha_nonalphabet_test2);
	return (run_unittests(&unittest));
}
