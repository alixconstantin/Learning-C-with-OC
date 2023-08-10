#include <stdio.h>
#include "game.h"

int	main(int argc, char *argv[])
{
	int number_of_players;
	int i;

	number_of_players = 5;
	Player Players[number_of_players];

	for ( i = 0; i < number_of_players; i++)
	{
		printf("What is your name Player ? ");	
		scanf("%s", Players[i].name);
		printf("What is your classe Player ? ");	
		scanf("%s", Players[i].classe);
		printf("What is your level Player ? ");
		scanf("%d", &Players[i].level);
	}
	printf("Le Donjon est composée des joueurs suivant :\n");
    for ( i = 0; i < number_of_players; i++)
	{
		printf("%s un %s de niveau %d\n",Players[i].name, Players[i].classe, Players[i].level);
	}
	return('0');

}
