#include <stdio.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (*c != '\0')
	{
		// printf(">%p=%c\n", c, *c);
		*c = 'z';
		c++;
		i++;
	}
	return (i);
}
