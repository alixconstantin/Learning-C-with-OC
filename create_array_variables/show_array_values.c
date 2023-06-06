#include <stdio.h>

// int *array can be just writte int array[]
// and its more clear
void	ft_show_array_values(int *array, int array_lenght);

int	main(int argc, char *argv[])
{
	int	array[4];

	array[0] = 42;
	array[1] = 41;
	array[2] = 40;
	array[3] = 39;
	ft_show_array_values(array, 4);
	return (0);
}

void	ft_show_array_values(int *array, int array_lenght)
{
	int	i;

	i = 0;
	while (i < array_lenght)
	{
		printf("The value is %d \n", array[i]);
		i++;
	}
}
