/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:12:49 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/28 14:12:50 by malcosta         ###   ########.fr       */
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
