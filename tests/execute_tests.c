/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:12:17 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/13 18:24:45 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/tests.h"

void	execute_tests(int *status)
{
	*status = *status | strlen_launcher();
	*status = *status | strlen_segv_launcher();
	*status = *status | strcpy_launcher();
	*status = *status | atoi_overflow_launcher();
	*status = *status | split_doublefree_launcher();
}
