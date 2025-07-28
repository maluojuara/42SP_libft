/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:11:45 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/28 14:11:47 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			uc;
	size_t					i;
	const unsigned char		*str;

	uc = (unsigned char)c;
	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
