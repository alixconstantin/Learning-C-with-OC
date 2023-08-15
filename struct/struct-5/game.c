#include <stdio.h>
#include "game.h" 

void	ft_copy_string(char	dest[], char src[])
{
	int	n = 0;
	while(src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0'; 
}

void	ft_create_caracter(t_player* player, char* name, char* classe, int level)
{
	ft_copy_string(player->name, name);
	ft_copy_string(player->classe, classe);
	player->level = level;
}

int	main()
{
	t_player fabien;
	ft_create_caracter(&fabien, "Fabien", "Bard", 13);	
	printf("Le joueur %s est un %s de niveau %d", fabien.name, fabien.classe, fabien.level);
	return 0;
}

