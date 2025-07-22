/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:05:42 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/22 16:48:42 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	char	*found;
	size_t	i;

	b = (char *)big;
	l = (char *)little;
	found = (char *)big;
	i = 1;
	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (i < len && *b)
	{
		if (*b == *l)
		{
			found = b;
			while (*b == *l && i < len && *b)
			{
				b++;
				l++;
				i++;
				if (!*l)
					return (found);
			}
		}
		b++;
		i++;
	}
	return (NULL);
}
