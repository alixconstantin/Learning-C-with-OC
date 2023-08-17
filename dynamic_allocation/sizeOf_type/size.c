#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Char is %zu octets\n", sizeof(char));
	printf("Int is %zu octets\n", sizeof(int));
	printf("Long is %zu octets\n", sizeof(long));
	printf("Double is %zu octets\n", sizeof(double));

	return 0;
}
