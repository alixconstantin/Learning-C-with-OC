#include <stdio.h>

int main(int argc, char *argv[])
{
	// Cette fonction est très simple à utiliser. Elle renvoie la position actuelle du curseur sous la forme d'un long
	long ftell(FILE* pointeurSurFichier);


	// Positionnez le curseur dans un fichier avec fseek
	// La fonction fseek  permet de déplacer le curseur d'un certain nombre de caractères (indiqué par deplacement  ) à partir de la position indiquée par origine  .
	// Le nombre deplacement  peut être un nombre positif (pour se déplacer en avant), nul (= 0) ou négatif (pour se déplacer en arrière).
	// Quant au nombre origine  , vous pouvez mettre comme valeur l'une des trois constantes (généralement des define  ) listées ci-dessous :

	int fseek(FILE* pointeurSurFichier, long deplacement, int origine);
	// SEEK_SET  : indique le début du fichier ;

    // SEEK_CUR  : indique la position actuelle du curseur ;

	// SEEK_END  : indique la fin du fichier.
	// Le code suivant place le curseur deux caractères après le début :
	fseek(fichier, 2, SEEK_SET);
	// Le code suivant place le curseur quatre caractères avant la position courante :
	fseek(fichier, -4, SEEK_CUR);
	// Le code suivant place le curseur à la fin du fichier :
	fseek(fichier, 0, SEEK_END);	
	// Replacez le curseur au début du fichier avec rewind
	void rewind(FILE* pointeurSurFichier);

	//Renommez un fichier avec rename
    rename("test.txt", "test_renomme.txt");

	// Supprimer un fichier avec remove
	remove("test.txt");
    return 0;
}
