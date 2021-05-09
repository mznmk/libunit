/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 21:30:14 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/27 03:45:08 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*
** =================================== const ===================================
*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif
# ifndef MAX_FD
#  define MAX_FD 1024
# endif
# define GNL_STATUS_LINE 1
# define GNL_STATUS_EOF 0
# define GNL_STATUS_ERROR -1

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif
# ifndef MAX_FD
#  define MAX_FD 1024
# endif
# define GNL_STATUS_LINE 1
# define GNL_STATUS_EOF 0
# define GNL_STATUS_ERROR -1

/*
** ================================== library ==================================
*/

# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

/*
** ================================= prototype =================================
*/

int			get_next_line(int fd, char **line);
void		free_safely(char **str);
int			free_safely_and_return_value(char **str, int return_value);
char		*gnl_substr(char *str, unsigned int start, size_t len);
char		*gnl_strjoin(char *s1, char *s2);

#endif
