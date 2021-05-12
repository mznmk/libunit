/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utilities.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 23:43:51 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 03:41:08 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"

/*!
** @brief	create new unittest
** @param	testname:	testname of new unittest
** @param	testfunc:	testfunc of new unittest
** @return	created new unittest
*/
static t_unittest	*create_unittest(char *testname, int (*testfunc)(void))
{
	t_unittest	*new_unittest;

	if (!testname || !testfunc)
		return (NULL);
	new_unittest = (t_unittest *)malloc(sizeof(t_unittest));
	if (!new_unittest)
		return (NULL);
	new_unittest->testname = testname;
	new_unittest->testfunc = testfunc;
	new_unittest->next = NULL;
	return (new_unittest);
}

/*!
** @brief	create new unittest & add it to unitlists
** @param	unittests:	bind all unittests
** @param	testname:	testname of new unittest
** @param	testfunc:	testfunc of new unittest
** @return	none
*/
void	add_unittest(
			t_unittest **unittests, char *testname, int (*testfunc)(void))
{
	t_unittest	*unittest;
	t_unittest	*new_unittest;

	if (!unittests || !testname || !testfunc)
		exit_unittests(unittests, "error: fail to add unittest");
	new_unittest = create_unittest(testname, testfunc);
	if (!new_unittest)
		exit_unittests(unittests, "error: fail to add unittest");
	unittest = *unittests;
	if (unittest)
	{
		while (unittest->next)
			unittest = unittest->next;
		unittest->next = new_unittest;
	}
	else
	{
		*unittests = new_unittest;
	}
}

/*!
** @brief	clear all unittests
** @param	unittests:	bind all unittests
** @return	none
*/
void	clear_unittests(t_unittest **unittests)
{
	t_unittest	*next_unittest;

	if (!unittests || !(*unittests))
		exit_unittests(unittests, "error: fail to clear unittests");
	while (*unittests)
	{
		next_unittest = (*unittests)->next;
		free(*unittests);
		*unittests = NULL;
		*unittests = next_unittest;
	}
}
