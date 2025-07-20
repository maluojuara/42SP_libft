/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 02:27:13 by maluojuara        #+#    #+#             */
/*   Updated: 2025/07/20 02:40:25 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*ptr;
	unsigned char	uc;
	size_t			len;

	len = ft_strlen(s);
	ptr = s + len;
	uc = (unsigned char)c;
	if (uc == '\0')
	{
		while (*ptr)
			ptr++;
		return ((char *)ptr);
	}
	while (len > 0)
	{
		ptr--;
		len--;
		if (*ptr == uc)
			return ((char *)ptr);
	}
	return (NULL);
}
