#include <stdio.h>

/**
 *	La fonction interroge sur l'âge de la personne ( ScanF )
 *	Puis stock la réponse dans la variable age
 *	la variable est affiché en PrintF
 *	age est init a 0 au cas ou la valeur n'est pas bonne
*/

int	main(int argc, char *argv[])
{
	int	age;

	age = 0;
	printf("Quel age avez-vous ? ");
	scanf("%d", &age);
	printf("Ah ! Vous avez donc %d ans !\n\n", age);
	return (0);
}
