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







int main(int argc, char* argv[])
{
    char lettre = 0; // Stocke la lettre proposée par l'utilisateur (retour du scanf)
    char motSecret[] = "ROUGE"; // C'est le mot à trouver
    int coupsRestants = 10; // Compteur de coups restants (0 = mort)
	int nombreLettres = tailleMot(motSecret);
	
	int *lettreTrouvee = NULL;
	lettreTrouvee = malloc(nombreLettres * sizeof(int);
	
    return 0;
}
