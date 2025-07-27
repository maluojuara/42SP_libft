
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
