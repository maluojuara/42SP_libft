/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:16:16 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/21 15:54:00 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_len;
	char		*ptr_dst;
	const char	*ptr_src;
	size_t		i;

	ptr_dst = dst;
	ptr_src = src;
	dst_len = ft_strlen(dst);
	i = dst_len;
	if (size > dst_len)
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
		return (ft_strlen(src) + dst_len);
	}
	return (size + ft_strlen(src));
}
