#include <stdio.h>

void	ft_modify_value(int *pointer)
{
	*pointer = 10;
}

int	main(void)
{
	int	number;

	number = 5;
	printf("Avant : %d\n", number);
	ft_modify_value(&number);
	printf("Après : %d\n", number);
	return (0);
}
