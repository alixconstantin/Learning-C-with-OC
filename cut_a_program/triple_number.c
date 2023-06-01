#include <stdio.h>
#include <stdlib.h>

int	triple(int number)
{
	return (3 * number);
}

int	main(int argc, char *argv[])
{
	int	number_prompt;
	int	number_tripled;

	number_prompt = 0;
	number_tripled = 0;
	printf("Entre un nombre...");
	scanf("%d", &number_prompt);
	number_tripled = triple(number_prompt);
	printf("\n Le triple de %d est %d !", number_prompt, number_tripled);
	return (0);
}
