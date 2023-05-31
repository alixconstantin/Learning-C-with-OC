#include <stdio.h>
#include <stdlib.h>

void	ft_prompt_47(void)
{
	int	number_prompt;

	while (number_prompt != 47)
	{
		printf("Tapez le nombre 47 ! ");
		scanf("%d", &number_prompt);
	}
}

void	ft_print_sentences(void)
{
	int	count;

	count = 0;
	while (count <= 10)
	{
		printf("Welcome in the Loop !\n");
		count++;
	}
}

int	main(void)
{
	ft_prompt_47();
	ft_print_sentences();
	return (0);
}
