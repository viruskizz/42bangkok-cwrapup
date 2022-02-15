#include <stdio.h>

int	ft_strlen2(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		c[i] = 'x';
		i++;
	}
	return (i);
}
