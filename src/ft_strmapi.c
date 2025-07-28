/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:35:24 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/28 14:58:47 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*out;
	unsigned int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	out = ft_strdup(s);
	if (!out)
		return (NULL);
	while (out[i])
	{
		out[i] = f(i, out[i]);
		i++;
	}
	return (out);
}
