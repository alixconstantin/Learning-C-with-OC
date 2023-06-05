#include <stdio.h>
#include <stdlib.h>
#include "air.h"

int	main(int argc, char *argv[])
{
	double resultat;
	resultat = ft_air_rectangle(10.0, 20.0);

	printf("L'air du rectangle est de %f \n", resultat);

	return (0);
}
