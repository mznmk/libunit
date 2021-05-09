/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 21:25:05 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 04:14:31 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../../includes/get_next_line.h"

static int	find_first_return_in_str(char *str)
{
	int		pos;

	if (!str)
		return (GNL_STATUS_ERROR);
	pos = 0;
	while (str[pos])
	{
		if (str[pos] == '\n')
			return (pos);
		pos++;
	}
	return (GNL_STATUS_ERROR);
}

static char	*create_newline_and_newtemp(char **temp)
{
	char	*newline;
	char	*newtemp;
	int		returnpos;

	if (!*temp)
		return (NULL);
	returnpos = find_first_return_in_str(*temp);
	if (returnpos < 0)
	{
		newline = gnl_substr(*temp, 0, ft_strlen(*temp));
		newtemp = gnl_substr(*temp, 0, 0);
	}
	else
	{
		newline = gnl_substr(*temp, 0, returnpos);
		newtemp = gnl_substr(*temp, returnpos + 1,
				ft_strlen(*temp) - (returnpos + 1));
	}
	free_safely(temp);
	*temp = newtemp;
	return (newline);
}

static char	*set_read_status_and_return_null(ssize_t *read_status)
{
	*read_status = GNL_STATUS_ERROR;
	return (NULL);
}

static char	*read_buff_and_create_newtemp(int fd, char *temp,
											ssize_t *read_status)
{
	char	*buff;

	buff = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (set_read_status_and_return_null(read_status));
	while (find_first_return_in_str(temp) < 0 && *read_status != 0)
	{
		*read_status = read(fd, buff, BUFFER_SIZE);
		if (*read_status < 0)
		{
			free_safely(&temp);
			free_safely(&buff);
			return (set_read_status_and_return_null(read_status));
		}
		buff[*read_status] = '\0';
		temp = gnl_strjoin(temp, buff);
		if (!temp)
			return (set_read_status_and_return_null(read_status));
	}
	free_safely(&buff);
	return (temp);
}

int	get_next_line(int fd, char **line)
{
	static char		*temp[MAX_FD];
	ssize_t			gnl_status;

	if (!line || BUFFER_SIZE < 1 || fd < 0 || MAX_FD <= fd)
		return (GNL_STATUS_ERROR);
	if (!temp[fd])
	{
		temp[fd] = gnl_substr("", 0, 0);
		if (!temp[fd])
			return (free_safely_and_return_value(&temp[fd], GNL_STATUS_ERROR));
	}
	gnl_status = 1;
	temp[fd] = read_buff_and_create_newtemp(fd, temp[fd], &gnl_status);
	if (!temp[fd])
		return (free_safely_and_return_value(&temp[fd], GNL_STATUS_ERROR));
	*line = create_newline_and_newtemp(&temp[fd]);
	if (!temp[fd] || !(*line))
	{
		free_safely(&temp[fd]);
		return (free_safely_and_return_value(line, GNL_STATUS_ERROR));
	}
	if (gnl_status == 0)
		return (free_safely_and_return_value(&temp[fd], GNL_STATUS_EOF));
	return (GNL_STATUS_LINE);
}
