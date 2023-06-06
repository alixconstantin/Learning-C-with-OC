#include <stdio.h>

int		ft_sum_array(int array[], int array_length);
double	ft_average_array(int array[], int array_length);

int	main(int argc, char *argv[])
{
	int		array[4];
	int		result_sum;
	double	result_average;

	array[0] = 42;
	array[1] = 40;
	array[2] = 25;
	array[3] = 10;
	result_sum = ft_sum_array(array, 4);
	printf("La somme de toutes les valeurs du tableau est :\n");
	printf("%d\n", result_sum);
	result_average = ft_average_array(array, 4);
	printf("La moyenne de toutes les valeurs du tableau est : \n");
	printf("%.2f\n", result_average);
	return (0);
}

int	ft_sum_array(int array[], int array_length)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < array_length)
	{
		sum += array[i];
		i++;
	}
	return (sum);
}

double	ft_average_array(int array[], int array_length)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < array_length)
	{
		sum += array[i];
		i++;
	}
	return ((double)sum / (double)array_length);
}
