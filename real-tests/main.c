/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:59:39 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/14 21:44:01 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/tests.h"

static void	execute_tests(int *status)
{
	*status = *status | memmove_launcher();
	*status = *status | strlen_launcher();
	*status = *status | isalnum_launcher();
	*status = *status | isalpha_launcher();
	*status = *status | isascii_launcher();
	*status = *status | isdigit_launcher();
	*status = *status | isprint_launcher();
	*status = *status | toupper_launcher();
	*status = *status | tolower_launcher();
	*status = *status | atoi_launcher();
}

int	main(void)
{
	int		status;

	print_framework_header();
	status = 0;
	execute_tests(&status);
	return (status);
}
