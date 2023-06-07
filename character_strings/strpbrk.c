#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *suiteChaine;

    // On cherche la première occurrence de x, d ou s dans "Texte de test"
    suiteChaine = strpbrk("Texte de test", "xds");

    if (suiteChaine != NULL)
    {
        printf("Voici la fin de la chaine a partir du premier des caracteres trouves : %s", suiteChaine);
    }

    return 0;
}
// Voici la fin de la chaine a partir du premier des caracteres trouves :
// xte de test
