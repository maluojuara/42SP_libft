/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:42:26 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/28 14:17:41 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		i;
	int		j;

	i = 0;
	j = 0;
	out = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (s1[i])
	{
		out[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		out[j] = s2[i];
		i++;
		j++;
	}
	out[j] = '\0';
	return (out);
}
