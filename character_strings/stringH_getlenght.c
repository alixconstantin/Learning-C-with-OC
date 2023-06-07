#include <string.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char chaine[] = "Salut";
	int longueurChaine = 0;

    // On récupère la longueur de la chaîne dans longueurChaine
    longueurChaine = strlen(chaine);

    // On affiche la longueur de la chaîne
    printf("La chaine %s fait %d caracteres de long", chaine, longueurChaine);

    return 0;
}
// This code is not corrected by 42 Norme (!)
