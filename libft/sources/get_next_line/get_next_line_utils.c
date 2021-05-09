/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 21:26:57 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 03:58:22 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../../includes/get_next_line.h"

void	free_safely(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
}

int	free_safely_and_return_value(char **str, int return_value)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
	return (return_value);
}

char	*gnl_substr(char *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	if (!str)
		return (NULL);
	s_len = ft_strlen(str);
	if (s_len < (size_t)start)
		s_len = 0;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < len)
		substr[i] = str[start + i];
	substr[i] = '\0';
	return (substr);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
	{
		free_safely(&s1);
		free_safely(&s2);
		return (NULL);
	}
	i = -1;
	while (s1[++i] != '\0')
		str[i] = s1[i];
	free_safely(&s1);
	i = -1;
	while (s2[++i] != '\0')
		str[len1 + i] = s2[i];
	str[len1 + i] = '\0';
	return (str);
}
