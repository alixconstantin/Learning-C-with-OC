#include <stdio.h>

/**
* Pour obtenir un résultat décimal 
* Il est nécessaire de préciser le .0
*/

void	ft_division(void)
{
	double	resultat;

	resultat = 0;
	resultat = 5.0 / 2.0;
	printf ("5 / 2 = %lf \n", resultat);
}

void	ft_summon(void)
{
	int	resultat;
	int	nombre_a;
	int	nombre_b;

	resultat = 0;
	nombre_a = 0;
	nombre_b = 0;
	printf("Entrez le nombre 1 : ");
	scanf("%d", &nombre_a);
	printf("Entrez le nombre 2 : ");
	scanf("%d", &nombre_b);
	resultat = nombreA + nombreB;
	printf ("%d + %d = %d\n", nombreA, nombreB, resultat);
}

int	main(void)
{
	ft_division();
	ft_summon();
	return (0);
}
