#include "game.h"

void Game_project2(void) //baskin31 games with one computer
{
	int i = 0;
	int me = 0;
	int com = 1;
	int n2 = 0;
	int rnd = 0;
	srand((unsigned)time(NULL));

	printf("======Game Start!======\n");

	while (1)
	{
		rnd = rand() % 3 + 1;

		printf("computer:");

		for (i = 0; i < rnd; i++)
		{
			printf("%d ", com);
			if (com == 31)
			{
				printf("\nYou won!");
				return 0;
			}
			com++;
			//printf("%d ", com);
		}
		me = com;
		printf("\nHow many numbers would you like to print out?");
		scanf(" %d", &n2);

		if (n2 >= 4 || n2 < 1)
		{
			printf("Only between 1 and 3!\n");
			printf("The computer won!");
			break;
		}

		for (i = 0; i < n2; i++)
		{
			printf("%d ", me);
			if (me == 31)
			{
				printf("\nThe computer won!");
				return 0;
			}
			me++;

			//printf("%d ", me);
		}
		printf("\n");
		com = me;
	}
}