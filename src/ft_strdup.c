/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 02:06:18 by maluojuara        #+#    #+#             */
/*   Updated: 2025/07/20 02:11:33 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*out;
	size_t	len;

	len = ft_strlen(s1);
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	ft_memcpy(out, s1, len);
	out[len] = '\0';
	return (out);
}
