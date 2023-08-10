#include <stdio.h>

void	copyString(char *dest, const char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	main(void)
{
	char word_src[] = "prout !";
	char word_dest[20];

	copyString(word_dest, word_src);
	printf("%s\n%s", word_dest, word_src);
	return	('0');
}
