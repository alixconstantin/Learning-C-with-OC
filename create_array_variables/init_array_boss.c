#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	array[4] = {42, 41, 40, 38};

	i = 0;
	while (i < 4)
	{
		printf("Array Value are %d\n", array[i]);
		i++;
	}
	return (0);
} 
// array[i] = {x, x, x, x} can't be used with the 42 Norme
// Error: DECL_ASSIGN_LINE     (line:   6, col:  18):	Declaration and assignation on a single line
// The error is not corrected for show the method.
