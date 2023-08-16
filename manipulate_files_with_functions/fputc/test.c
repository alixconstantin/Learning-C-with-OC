#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
 
    fichier = fopen("test.txt", "w");
 
    if (fichier != NULL)
    {
        fputs("Hello les narvalos", fichier);
        fclose(fichier);
    }
 
    return 0;
}
