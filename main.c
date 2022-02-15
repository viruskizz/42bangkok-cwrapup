#include <stdio.h>
#include <stdlib.h>
#include "header.h"

// use header.h instead of individual define
// #include "name.h"
// int	ft_isalpha(int c);
// int	ft_strlen(char *str);
// int	ft_strlen2(char *str);

int	main(void)
{
	char	*str = "Hello World";
	char	str2[] = "Hello World";
	printf("x = %d\n", ft_isalpha('x'));
	// printf("Hello World (%d)\n", ft_strlen(str)); // Cannot change string with * declearation
	printf("Hello World (%d)\n", ft_strlen(str2));
	printf("new str = %s\n", str2);
	printf("Hello World (%d)\n", ft_strlen2(str2));
	printf("new str2 = %s\n", str2);

	char	*str3;
	str3 = malloc(sizeof(char) * 10);
	str3[0] = 'A';
	str3[1] = 'B';
	str3[9] = '\0';
	printf("%s\n", str3);

	int		*numbers;
	numbers = malloc(sizeof(int) * 10);
	printf(">>%p\n", numbers);
	numbers[0] = 10;

	// struct	s_name	fullname;
	t_name	fullname;
	fullname.firstname = "Araiva";
	fullname.lastname = "Pon";
	printf("%s\n", fullname.firstname);
	printf("%s\n", fullname.lastname);

	// usually free before return
	free(str3);
	free(numbers);
	return (0);
}
