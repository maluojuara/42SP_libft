/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:16:16 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/22 11:49:29 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*ptr_dst;
	const char	*ptr_src;
	size_t		i;

	ptr_dst = dst;
	ptr_src = src;
	if (size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	if (i < size)
	{
		while (*ptr_dst)
			ptr_dst++;
		while (i < size - 1 && *ptr_src)
		{
			*ptr_dst = *ptr_src;
			ptr_dst++;
			ptr_src++;
			i++;
		}
		*ptr_dst = '\0';
		return (i + ft_strlen(ptr_src));
	}
	return (size + ft_strlen(src));
}
