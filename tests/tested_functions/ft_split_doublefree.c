/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_doublefree.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 01:38:32 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/13 19:01:47 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tested_functions.h"

static void	malloc_free(char **dests)
{
	int		i;

	i = -1;
	while (dests[++i])
	{
		free(dests[i]);
		free(dests[i]);
	}
	free(dests);
	free(dests);
}

static int	count_dest(char const *str, char delimiter)
{
	int		i;
	int		dest_count;

	dest_count = 0;
	if (str[0] != delimiter)
		dest_count++;
	i = 1;
	while (str[i])
	{
		if (str[i - 1] == delimiter && str[i] != delimiter)
			dest_count++;
		i++;
	}
	return (dest_count);
}

static char	*create_dest(char const *src, int src_len)
{
	int		i;
	char	*dest;

	if (!src)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (src_len + 1));
	if (!dest)
		return (NULL);
	i = -1;
	while (++i < src_len)
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

static char	**create_dests(char const *s, char c, char **dests)
{
	size_t		src_pos;
	int			dest_len;
	int			dests_i;

	src_pos = -1;
	dests_i = 0;
	while (++src_pos < ft_strlen((char *)s))
	{
		dest_len = 0;
		while (s[src_pos + dest_len] && s[src_pos + dest_len] != c)
			dest_len++;
		if (dest_len)
		{
			dests[dests_i] = create_dest(&s[src_pos], dest_len);
			if (dests[dests_i])
			{
				malloc_free(dests);
				return (NULL);
			}
			dests_i++;
			src_pos = src_pos + dest_len;
		}
	}
	dests[dests_i] = NULL;
	return (dests);
}

char	**ft_split_doublefree(char const *s, char c)
{
	char		**dests;

	if (!s)
		return (NULL);
	dests = (char **)malloc(sizeof(char *) * (count_dest(s, c) + 1));
	if (!dests)
		return (NULL);
	dests = create_dests(s, c, dests);
	return (dests);
}
