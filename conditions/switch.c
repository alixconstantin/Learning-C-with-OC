#include <stdio.h>
#include <stdlib.h>

void ft_print_menu(void)
{
	printf("\n=== Meny ===\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");
	printf("Votre choix ?\n\n");
}

void ft_user_choice(void)
{
	int user_choice;

	scanf("%d", &user_choice);
	switch(user_choice)
	{
		case 1:
			printf("a Royal Cheese, nice choice !\n");
			break;
		case 2:
			printf("a Mc Deluxe, nice choice !\n");
			break;
		case 3:
			printf("a Mc Bacon, nice choice !\n");
			break;
		case 4:
			printf("a Big Mac, nice choice !\n");
			break;
		default:
			printf("You have to choose 1, 2, 3 or 4 ! \n");
			break;
	}
}
int main()
{
	ft_print_menu();
	ft_user_choice();
	return (0);
}
