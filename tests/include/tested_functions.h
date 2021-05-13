/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tested_functions.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:41 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/13 18:57:03 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTED_FUNCTIONS_H
# define TESTED_FUNCTIONS_H

/*
** ================================== library ==================================
*/

# include <stdlib.h>

/*
** =========================== prototype declaration ===========================
*/

unsigned long	ft_strlen(const char *s);
unsigned long	ft_strlen_segv(const char *s);
unsigned long	ft_strlen_timeout(const char *s);
char			*ft_strcpy(char *dst, const char *src);
int				ft_atoi_overflow(const char *nptr);
char			**ft_split_doublefree(char const *s, char c);

#endif
