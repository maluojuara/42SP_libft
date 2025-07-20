/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 02:17:05 by maluojuara        #+#    #+#             */
/*   Updated: 2025/07/20 02:23:01 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		uc;
	size_t				i;
	const unsigned char	*str;

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


  void *
     memchr(const void *s, int c, size_t n);

DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if
     no such byte exists within n bytes.