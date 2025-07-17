int	ft_toupper(int c)
{
	int	out;

	out = c;
	if (c >= 97 && c <= 122)
		out = c - 32;
	return (out);
}
