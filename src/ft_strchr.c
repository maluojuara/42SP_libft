/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 01:51:22 by maluojuara        #+#    #+#             */
/*   Updated: 2025/07/20 02:49:43 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char		*ptr;
	unsigned char	uc;

	ptr = s;
	uc = (unsigned char)c;
	if (uc == '\0')
	{
		while (*ptr)
			ptr++;
		return ((char *)ptr);
	}
	while (*ptr)
	{
		if (*ptr == uc)
			return ((char *)ptr);
		ptr++;
	}
	return (NULL);
}
