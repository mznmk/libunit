/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 01:29:12 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:03:14 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*btree_search_item(t_btree *root,
								void *data_ref, int (*cmpf)(void *, void *))
{
	t_btree	*match_node;

	match_node = NULL;
	if (root == NULL)
		return (NULL);
	if (match_node == NULL)
	{
		if ((*cmpf)((void *)root->item, data_ref) == 0)
			match_node = root;
		else
			match_node = btree_search_item(root->left, data_ref, cmpf);
	}
	if (match_node == NULL)
	{
		if ((*cmpf)((void *)root->item, data_ref) == 0)
			match_node = root;
	}
	if (match_node == NULL)
	{
		if ((*cmpf)((void *)root->item, data_ref) == 0)
			match_node = root;
		else
			match_node = btree_search_item(root->right, data_ref, cmpf);
	}
	return (match_node);
}
