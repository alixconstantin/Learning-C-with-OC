#include <stdio.h>

void	ft_writte_hellov(void);
void	ft_writte_hello_modernly(void);

int	main(int argc, char *argv[])
{
	ft_writte_hello();
	ft_writte_hello_modernly();
	return (0);
}

void	ft_writte_hello(void)
{
	char	hello_array[6];

	hello_array[0] = 'H';
	hello_array[1] = 'e';
	hello_array[2] = 'l';
	hello_array[3] = 'l';
	hello_array[4] = 'o';
	hello_array[5] = '\0';
	printf("%s\n", hello_array);
}

void	ft_writte_hello_modernly(void)
{
	char	hello_array[] = "Hello\n";

	printf("%s", hello_array);
}
