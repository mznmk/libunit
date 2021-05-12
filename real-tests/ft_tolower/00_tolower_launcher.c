/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 21:37:51 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_tolower.h"

int	tolower_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_tolower");
	add_unittest(&unittest, "Basic test", &tolower_basic_test);
	return (run_unittests(&unittest));
}
