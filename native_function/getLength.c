#include <stdio.h>
#include <stdlib.h>

int	ft_get_length(char *word)
{
	int n = 0;
	while(word[n] != '\0')
	{
		n++;
	}
	return n;
}

int	main (int argc, char *argv[])
{
	char name[] = "Test";
	int lenght = ft_get_length(name);
	printf("Test is %d letters", lenght);
	return (0);
}
