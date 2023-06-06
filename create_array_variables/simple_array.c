#include <stdio.h>

int	main(void)
{
	int	i;
	int	array[4];

	i = 0;
	array[0] = 2;
	array[1] = 42;
	array[2] = 89;
	array[3] = 29;
	while (i <= 3)
	{
		printf("The value is %d\n", array[i]);
		i++;
	}
	return (0);
}
