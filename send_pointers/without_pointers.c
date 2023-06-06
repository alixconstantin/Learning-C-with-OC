#include <stdio.h>

// Modification de la copie locale de la variable
void	ft_modify_variable(int value)
{
	value = 10;
}

/**
 * Affiche Avant : 5
 * Passage de la valeur de la variable ds la ft
 * Affiche Après : 5
*/
int	main(void)
{
	int	number;

	printf("Avant : %d\n", number);
	ft_modify_variable(number);
	printf("Après : %d\n", number);
	return (0);
}
