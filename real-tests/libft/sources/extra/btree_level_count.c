/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 01:29:12 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 02:03:13 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	btree_level_count(t_btree *root)
{
	int	max_lv_cnt_left;
	int	max_lv_cnt_right;
	int	max_lv_cnt;

	if (root == NULL)
		return (0);
	max_lv_cnt_left = 0;
	max_lv_cnt_right = 0;
	max_lv_cnt = 0;
	if (root->left != NULL)
		max_lv_cnt_left = btree_level_count(root->left);
	if (root->right != NULL)
		max_lv_cnt_right = btree_level_count(root->right);
	if (max_lv_cnt_left >= max_lv_cnt_right)
		max_lv_cnt = max_lv_cnt_left + 1;
	else
		max_lv_cnt = max_lv_cnt_right + 1;
	return (max_lv_cnt);
}
