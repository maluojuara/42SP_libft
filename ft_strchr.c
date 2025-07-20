/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 01:51:22 by maluojuara        #+#    #+#             */
/*   Updated: 2025/07/20 01:58:35 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	unsigned char uc;
	uc = (unsigned char)c;

	if (uc == '\0')
	{
		while(*ptr)
			ptr++;
		return ((char *)ptr);
	}
	while(*ptr)
	{
		if (*ptr == uc)
			return ((char *)ptr);
		ptr++;
	}
	return (NULL);
}
