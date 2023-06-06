#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	number;
	int	*my_pointer;

	my_pointer = &number;
	number = 42;
	printf("The value of variable number is %d\n", number);
	printf("The adress of variable number is %p\n", &number);
	printf("The value of the variable my_pointer is  %p\n", my_pointer);
	printf("The value of the variable at the adress of my_pointer is %d\n", *my_pointer);
	return (0);
}
