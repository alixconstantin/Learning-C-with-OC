#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	number_life;

	number_life = 5;
	printf("Vous avez %d vies \n", number_life);
	printf("*** B A M ***\n");
	number_life = 4;
	printf("Ah desole ! il ne vous reste plus que \n");
	printf("%d vies maintenant ! \n\n", number_life);
	return (0);
}
