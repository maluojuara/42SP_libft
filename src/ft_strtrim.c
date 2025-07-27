
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]))
			i++;
		else
			break ;
	}
	while (s1[i])
	{
		if (ft_strchr(set, s1[j]))
			j--;
		else
			break ;
	}
	return (ft_substr(s1, i, (j - i + 1)));
}
