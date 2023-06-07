#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	name[100];

	printf("Hello, what's your name ? \n");
	scanf("%s", name);
	printf("Welcome %s !\n", name);
	return (0);
}
