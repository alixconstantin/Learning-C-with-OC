#include <stdio.h>
#include <stdlib.h>

void	ft_punition(int line_number)
{
	int	line;

	line = 0;
	while (line < line_number)
	{
		printf("Je ne recommencerais pas ! \n");
		line++;
	}
}

int	main(int argc, char *argv[])
{
	ft_punition(10);
	return (0);
}	
