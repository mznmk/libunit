/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_tests_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:12:08 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/13 12:38:51 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/tests.h"

void	execute_tests(int *status)
{
	*status = *status | strlen_launcher();
	*status = *status | strlen_segv_launcher();
	*status = *status | strlen_timeout_launcher();
	*status = *status | strcpy_launcher();
	*status = *status | atoi_overflow_launcher();
}
