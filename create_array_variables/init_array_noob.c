#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	array[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		array[i] = 0;
		printf("la valeur est %d\n", array[i]);
		i++;
	}
	return (0);
}
