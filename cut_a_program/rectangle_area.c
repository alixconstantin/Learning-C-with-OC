#include <stdio.h>
#include <stdlib.h>

double	ft_calculate_area_rectangle(double lenght, double height)
{
	return (lenght * height);
}

int	main(int argc, char *argv[])
{
	printf("L'air d'un rectangle de longueur 5 et de hauteur 10 est de : %f \n", ft_calculate_area_rectangle(5, 10));
	printf("L'air d'un rectangle de longueur 2.5 et de hauteur 3.5 est de : %f \n", ft_calculate_area_rectangle(2.5, 3.5));
	printf("L'air d'un rectangle de longueur 4.2 et de hauteur 9.7 est de : %f \n", ft_calculate_area_rectangle(4.2, 9.7));
	return (0);
}
