#include <stdio.h>
#include <stdlib.h>

// La ligne suivante est le prototype de aireRectangle :
double	ft_calculate_area_rectangle(double largeur, double hauteur);

int	main(int argc, char *argv[])
{
	printf("L'air d'un rectangle de longueur 5 et de hauteur 10 est de : %f \n", ft_calculate_area_rectangle(5, 10));
	printf("L'air d'un rectangle de longueur 2.5 et de hauteur 3.5 est de : %f \n", ft_calculate_area_rectangle(2.5, 3.5));
	printf("L'air d'un rectangle de longueur 4.2 et de hauteur 9.7 est de : %f \n", ft_calculate_area_rectangle(4.2, 9.7));
	return (0);
}

// Notre fonction aireRectangle peut maintenant être mise n'importe où dans le code source :
double	ft_calculate_area_rectangle(double largeur, double hauteur)
{
	return (largeur * hauteur);
}
