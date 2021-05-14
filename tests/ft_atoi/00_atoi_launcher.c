/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 21:23:15 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

static void	add_unittest_1(t_unittest **unittests)
{
	add_unittest(unittests, "Zero (digit==1)", &atoi_zero_a);
	add_unittest(unittests, "Zero (digit==5)", &atoi_zero_b);
	add_unittest(unittests, "Zero (digit==10)", &atoi_zero_c);
	add_unittest(unittests, "Number (digit==1)", &atoi_number_a);
	add_unittest(unittests, "Number (digit==5)", &atoi_number_b);
	add_unittest(unittests, "Number (digit==10)", &atoi_number_c);
	add_unittest(unittests, "Positive Number (digit==1)",
		&atoi_positive_number_a);
	add_unittest(unittests, "Positive Number (digit==5)",
		&atoi_positive_number_b);
	add_unittest(unittests, "Positive Number (digit==10)",
		&atoi_positive_number_c);
	add_unittest(unittests, "Negative Number (digit==1)",
		&atoi_negative_number_a);
	add_unittest(unittests, "Negative Number (digit==5)",
		&atoi_negative_number_b);
	add_unittest(unittests, "Negative Number (digit==10)",
		&atoi_negative_number_c);
}

static void	add_unittest_2(t_unittest **unittests)
{
	add_unittest(unittests, "Int Min", &atoi_int_min);
	add_unittest(unittests, "Int Max", &atoi_int_max);
	add_unittest(unittests, "Int Underflow", &atoi_int_underflow);
	add_unittest(unittests, "Int Overflow", &atoi_int_overflow);
	add_unittest(unittests, "Long Min", &atoi_long_min);
	add_unittest(unittests, "Long Max", &atoi_long_max);
	add_unittest(unittests, "Long Underflow", &atoi_long_underflow);
	add_unittest(unittests, "Long Overflow", &atoi_long_overflow);
	add_unittest(unittests, "Nothing", &atoi_nothing);
	add_unittest(unittests, "String before number", &atoi_before_string_a);
	add_unittest(unittests, "String after number", &atoi_after_string_a);
	add_unittest(unittests, "Space before number", &atoi_before_space_a);
	add_unittest(unittests, "Space after number", &atoi_after_space_a);
	add_unittest(unittests, "Invisible before number",
		&atoi_before_invisible_a);
	add_unittest(unittests, "Invisible after number",
		&atoi_after_invisible_a);
	add_unittest(unittests, "Multi Minus", &atoi_multi_minus_a);
	add_unittest(unittests, "Multi Plus", &atoi_multi_plus_a);
}

int	atoi_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_atoi");
	add_unittest_1(&unittest);
	add_unittest_2(&unittest);
	return (run_unittests(&unittest));
}
