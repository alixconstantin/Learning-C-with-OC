#include <stdio.h>
#include <string.h>

int longueurChaine(const char chaine[]);

int main(int argc, char *argv[])
{
    char chaine[] = "Salut";
    int longueur = 0;

    longueur = longueurChaine(chaine);

    printf("La chaine %s fait %d caracteres de long", chaine, longueur);


    return 0;
}

int longueurChaine(const char chaine[])
{
    int nombreDeCaracteres = 0;
    char caractereActuel; 
	
	caractereActuel = chaine[nombreDeCaracteres];
	while(caractereActuel != '\0')
    {
        caractereActuel = chaine[nombreDeCaracteres];
        nombreDeCaracteres++;
    }

    nombreDeCaracteres--; // On retire 1 caractère de long pour ne pas compter le caractère \0

    return nombreDeCaracteres;
}
// Ce code n'est pas a la norme de 42 (!);
