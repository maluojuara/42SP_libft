
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	if (!ptr_dst && !ptr_src)
		return (0);
	if (ptr_dst <= ptr_src)
	{
		ft_memcpy(ptr_dst, ptr_src, len);
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			ptr_dst[i] = ptr_src[i];
		}
	}
	return (dst);
}
