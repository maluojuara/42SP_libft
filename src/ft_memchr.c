
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			uc;
	size_t					i;
	const unsigned char		*str;

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
