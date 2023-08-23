#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int tailleMot(char motSecret[])
{
    int nombreLettres = 0;
    for(int i = 0; motSecret[i] != '\0'; i++)
    {
        nombreLettres++;
    }
    return nombreLettres;
}



void initTableau(int* lettreTrouvee, int taille)
{
    for(int i = 0; i < taille; i++)
    {
        lettreTrouvee[i] = 0;
    }
}

int gagne(int *lettreTrouvee, int nombreLettres)
{
    int i = 0;
    int joueurGagne = 1;
 
    for (i = 0 ; i < nombreLettres ; i++)
    {
		if (lettreTrouvee[i] == 1)
   			joueurGagne = 1;
		else
    		joueurGagne = 0;
    }
    return joueurGagne;
}



int main(int argc, char* argv[])
{
    char lettre = 0; // Stocke la lettre proposée par l'utilisateur (retour du scanf)
    char motSecret[] = "ROUGE"; // C'est le mot à trouver
    int coupsRestants = 10; // Compteur de coups restants (0 = mort)
	int nombreLettres = tailleMot(motSecret);
	
	int *lettreTrouvee = NULL;
	lettreTrouvee = malloc(nombreLettres * sizeof(int);
	while(coupsRestants > 0 && !gagne(lettreTrouvee, nombreLettres)
	{
		printf("\n\nIl vous reste %d coups a jouer", coupsRestants);
		printf("\nQuel est le mot secret ? ");
		
		for (int i = 0 ; i < nombreLettres ; i++)
{	
    if (lettreTrouvee[i])
        printf("%c", motSecret[i]);
    else
        printf("*");
}

	}
	
    return 0;
}
