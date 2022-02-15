static int is_check(int c);

int	ft_isalpha(int c)
{
	return is_check(c);
}

static int is_check(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
