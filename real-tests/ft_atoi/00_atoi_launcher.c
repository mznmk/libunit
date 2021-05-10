/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 23:24:29 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_atoi");
	add_unittest(&unittest, "Zero (digit==1)", &atoi_zero_a);
	add_unittest(&unittest, "Positive number (digit==1)", &atoi_positive_number_a);
	add_unittest(&unittest, "Negative number (digit==1)", &atoi_negative_number_a);
	return (run_unittests(&unittest));
}
