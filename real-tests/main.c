/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:59:39 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 02:08:17 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/tests.h"

static void	execute_tests(int *status)
{
	*status = *status | memmove_launcher();
	*status = *status | strlen_launcher();
	*status = *status | atoi_launcher();
}

int	main(void)
{
	int		status;

	print_framework_header();
	status = 0;
	execute_tests(&status);
	if (status != STAT_SUCCESS)
		return (STAT_FAILURE);
	return (STAT_SUCCESS);
}
