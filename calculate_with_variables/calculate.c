#include <stdio.h>

	/**
	 * Pour obtenir un résultat décimal 
	 * Il est nécessaire de préciser le .0
 	*/

	void	ft_division(void)
{
	double	resultat = 0;
	resultat = 5.0 / 2.0;
	printf ("5 / 2 = %lf \n", resultat);
}


	void	ft_summon(void)
{
	int resultat;
	int nombreA;
	int nombreB;

	resultat = 0;
	nombreA = 0;
	nombreB = 0;
	printf("Entrez le nombre 1 : ");
	scanf("%d", &nombreB);
	printf("Entrez le nombre 2 : ");
	scanf("%d", &nombreA);
	resultat = nombreA + nombreB;
	printf ("%d + %d = %d\n", nombreA, nombreB, resultat);
}


	int main ()
{
	ft_division();
	ft_summon();
	return(0);
}
