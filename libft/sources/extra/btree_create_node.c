/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 19:30:06 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:04:31 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*new_node;

	new_node = malloc(sizeof(t_btree));
	if (new_node != NULL)
	{
		new_node->item = item;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	return (new_node);
}
