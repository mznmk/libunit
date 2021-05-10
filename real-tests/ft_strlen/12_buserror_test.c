/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_buserror_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:59:42 by tarata            #+#    #+#             */
/*   Updated: 2021/05/11 03:51:17 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen_bus(char *str)
{
	asm( "pushf\n\torl $0x40000,(%rsp)\n\tpopf");
    char *p = (char*)malloc(sizeof(int) + 1);
    memset(p, 0, sizeof(int) + 1);
	//str[0] = 'a';
    return (ft_strlen(str));
}

int buserror_test(void)
{
	if (ft_strlen_bus("TEST") == strlen("TEST"))
    	return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}