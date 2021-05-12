/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_child_prcess.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 20:24:48 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 20:27:32 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"

/*!
** @brief	run child process
** @param	unittest:	current unittest
** @return	none
*/
void	run_child_process(t_unittest *unittest)
{
	int	status;

	status = unittest->testfunc();
	exit(status);
}
