/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tested_functions.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:07:41 by mmizuno           #+#    #+#             */
/*   Updated: 2021/05/11 21:08:42 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTED_FUNCTIONS_H
# define TESTED_FUNCTIONS_H

/*
** =========================== prototype declaration ===========================
*/

unsigned long	ft_strlen(const char *s);
unsigned long	ft_strlen_segv(const char *s);
unsigned long	ft_strlen_timeout(const char *s);

#endif
