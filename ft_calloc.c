/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 02:12:03 by maluojuara        #+#    #+#             */
/*   Updated: 2025/07/20 02:16:18 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void	*ft_calloc(size_t count, size_t size)
 {
	void	*out;
	size_t	alloc;

	if (size != 0 && count > SIZE_MAX / size)
   		return NULL;
	alloc = count * size;
	out	= malloc(alloc);
	if (!out)
		return (NULL);
	ft_bzero(out, alloc);
	return (out);
 }


	  The calloc() function contiguously allocates enough space for count
     objects that are size bytes of memory each and returns a pointer to the
     allocated memory.  The allocated memory is filled with bytes of value
     zero.