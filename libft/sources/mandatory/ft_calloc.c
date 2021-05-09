/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 23:17:15 by mmizuno           #+#    #+#             */
/*   Updated: 2021/04/26 23:54:00 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*!
** @brief	The calloc() function allocates space for number objects,
**			each size bytes in length.
**			The result is identical	to calling malloc()
**			with an argument of number * size, with the exception
**			that the allocated memory is explicitly initialized to zero bytes.
** @return	The calloc() functions return a pointer to the allocated memory
**			if successful;
**			otherwise a NULL pointer is returned and errno is set to ENOMEM.
*/
void	*ft_calloc(size_t number, size_t size)
{
	void	*memory;

	memory = (void *)malloc(size * number);
	if (!memory)
		return (NULL);
	ft_bzero(memory, size * number);
	return (memory);
}
