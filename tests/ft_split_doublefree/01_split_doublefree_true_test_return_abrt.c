/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_split_doublefree_true_test_return_abrt.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:06:29 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/13 19:00:14 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_split_doublefree.h"

int	split_doublefree_true_test_return_abrt(void)
{
	char	*string;
	char	**expected;
	char	**splited;

	string = " aaa bbb ccc ddd eee ";
	expected = ((char *[6]){"aaa", "bbb", "ccc", "ddd", "eee", NULL});
	splited = NULL;
	splited = ft_split_doublefree(string, ' ');
	while (*expected && *splited)
	{
		if (strcmp(*expected, *splited))
			return (STAT_FAILURE);
		expected++;
		splited++;
	}
	return (STAT_SUCCESS);
}
