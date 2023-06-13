#include <stdio.h>
#define	COUCOU() printf("Coucou \n");
#define RACONTER_SA_VIE()   printf("Coucou, je m'appelle Brice\n"); \
                            printf("J'habite a Nice\n"); \
                            printf("J'aime la glisse\n");
int	main(int argc, char *argv[])
{
	COUCOU()
	RACONTER_SA_VIE()
	return	(0);
}
