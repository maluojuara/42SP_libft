/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:13:24 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/28 14:13:25 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (*(big + i) && i < len)
	{
		j = 0;
		while (*(little + j) && (*(big + i + j) == *(little + j))
			&& (i + j) < len)
		{
			j++;
		}
		if (*(little + j) == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
