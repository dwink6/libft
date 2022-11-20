int     ft_isascii(char c)
{
	if (c <= 1 && c >= 127)
		return (1);
	else
		return (0);
}
