#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

typedef enum { false, true } bool;

void Game_project1 (void)
{
	int lastValue = 0;
	int i = 0;
	char j[4];
	char c1[10];



	bool isComputer = true;
	bool isCorrect = true;

	printf("=========Game Start!=========\n");

	while (lastValue < 30 && isCorrect)
	{
		//lastValue = i;
		isCorrect = false;
		lastValue++;

		if (isComputer = true)
		{

			if (lastValue % 10 == 3 || lastValue % 10 == 6 || lastValue % 10 == 9)
			{
				printf("com:clap\n");
				isComputer = false;
			}
			else
			{
				printf("com: %d\n", lastValue);
				isComputer = false;
			}
		}



		else (isComputer = false);
		{
			printf("me:");
			scanf("%d", &i);
			//scanf("%s", &j);
			sprintf(c1, "%d", i);


			if (i == lastValue || i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
			{
				printf("\nThe computer won");
				break;
			}

			else if (c1 == 'clap')
			{

				lastValue += 1;
				lastValue = i;
			}


			else if (i % 10 != 3 || i % 10 != 6 || i % 10 != 9)
			{
				lastValue += 1;
			}

		}
		


		if (i == lastValue)
		{
			isCorrect = true;
		}
		else
		{
			isCorrect = false;

		}
	}



}

void Game_project2(void)
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


		if (n2 >= 4 || n2 == 0)
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

int main()
{
	int i = 0;
	
	printf("Which game are you going to play?\n");
	printf("1.Playing 369 games with one computer\n");
	printf("2.Playing baskin_robins31 games with one computer\n");
	printf("Enter the number:");
	scanf("%d", &i);
	
	if ( i == 1 )
	{
		Game_project1();
	}
	else if ( i == 2 )
	{
		Game_project2();
	}

}