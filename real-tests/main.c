/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:59:39 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/10 22:25:03 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/tests.h"

static void	execute_tests(int *status)
{
	*status = *status | atoi_launcher();
	*status = *status | strlen_launcher();
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
