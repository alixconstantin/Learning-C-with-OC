#include <stdio.h>

void	ft_triple_pointer( int *pointer_on_number);

int	main(int argc, char *argv[])
{
	int	number;
	int	*pointer;

	number = 5;
	pointer = &number;
	ft_triple_pointer(pointer);
	printf("The triple of number is %d \n", number);
	return (0);
}

void	ft_triple_pointer( int *pointer_on_number)
{
	*pointer_on_number *= 3;
}
