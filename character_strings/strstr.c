#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *suiteChaine;

    // On cherche la première occurrence de "test" dans "Texte de test" :
    suiteChaine = strstr("Texte de test magnifique", "test");
    if (suiteChaine != NULL)
    {
        printf("Premiere occurrence de test dans Texte de test : %s\n", suiteChaine);
    }

    return 0;
}
// Premiere occurrence de test dans Texte de test : test
