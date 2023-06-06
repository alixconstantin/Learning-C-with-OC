#include <stdio.h>

void	ft_minutes_cut( int *pointer_hours, int *pointer_minutes);

int	main( int argc, char *argv[])
{
	int	minutes;
	int	hours;

	minutes = 90;
	hours = 0;
	ft_minutes_cut(&hours, &minutes);
	printf("90 minutes equal to %d hours & %d minutes\n", hours, minutes);
	return (0);
}

void	ft_minutes_cut( int *pointer_hours, int *pointer_minutes)
{
	*hours = *minutes / 60;
	*minutes = *minutes % 60;
}

