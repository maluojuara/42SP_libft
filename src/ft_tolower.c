
int	ft_tolower(int c)
{
	int	out;

	out = c;
	if (c >= 65 && c <= 90)
		out = c + 32;
	return (out);
}
