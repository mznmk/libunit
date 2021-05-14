/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:35 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 19:38:29 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_atoi.h"

int	atoi_launcher(void)
{
	t_unittest	*unittest;

	unittest = NULL;
	print_unittests_header("ft_atoi");
	add_unittest(&unittest, "Zero (digit==1)", &atoi_zero_a);
	add_unittest(&unittest, "Positive number", &atoi_positive_number_a);
	add_unittest(&unittest, "Negative number", &atoi_negative_number_a);
	add_unittest(&unittest, "Intmax number", &atoi_intmax);
	add_unittest(&unittest, "Intmin number", &atoi_intmin);
	add_unittest(&unittest, "Sign and number (+-1)", \
				&atoi_multiple_different_sign);
	add_unittest(&unittest, "Sign and number (++1)", &atoi_multiple_same_sign);
	add_unittest(&unittest, "Sign and number (1+1)", &atoi_plus_sign_in_number);
	add_unittest(&unittest, "Sign and number (1-1)", \
				&atoi_minus_sign_in_number);
	add_unittest(&unittest, "Alphabet", &atoi_alphabet);
	add_unittest(&unittest, "Alphabet and number", &atoi_alphabet_number);
	add_unittest(&unittest, "Space character", &atoi_space_character);
	add_unittest(&unittest, "Space and number", &atoi_space_character_number);
	add_unittest(&unittest, "Small size number", &atoi_smallsize_number);
	add_unittest(&unittest, "Middle size number", &atoi_middlesize_number);
	add_unittest(&unittest, "Big size number", &atoi_bigsize_number);
	return (run_unittests(&unittest));
}
