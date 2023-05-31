#include <stdio.h>
#include <stdlib.h>

/*
* If / Else If / Else
* && (ET) / || (OU) / ! (NON)
* int majeur = age >=18 renvoie 0 ( faux ) ou 1 ( vrai )
*/
void	ft_is_major(void)
{
	if (age >= 18)
	{
		printf("Vous etes majeur !");
	}
	else if (age > 4)
	{
		printf("Bon t'es pas trop jeune quand même...");
	}
	else
	{
		printf("Agaa gaa aga gaaaa");
	}
}

int	main(void)
{
	ft_is_major();
	return (0);
}
