#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	// char *fgets( char *str, int num, FILE *stream );//
	// str for an array for writte the text
	// num for the array size, including \0
	// stream for the file to read, stdin for the standard input here
	char name[10];

	printf("Hey buddy, what's your name ?\n");
	fgets(name, 10, stdin);
	printf("You name is : %s \n", name);

	return (0);
}
