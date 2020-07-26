#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <string.h>
#include <ctype.h>
typedef enum { false, true } bool;



void Game_project1(void) //369 games with one computer
{
	int lastValue = 0;
	int i = 0;
	char input ;

	bool isComputer = true;
	
	printf("=========Game Start!=========\n");

	while (lastValue < 30 )
	{
		lastValue++;

		if (isComputer == true)
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

		else if (isComputer == false)
		{
			printf("me:");
			scanf("%s", &input);

			if (strcmp(input,"clap")==0)
			{
				if (lastValue % 10 == 3 || lastValue % 10 == 6 || lastValue % 10 == 9)
				{
					isComputer = true;
					continue;
				}
				else
				{
					printf("The computer won");
					break;
					//isComputer = true;
				}
			}
			else
			{
				int i = atoi(input);
				if (i != lastValue || i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
				{
					printf("\nThe computer won");
					isComputer = true;
					break;
				}
				else
				{
					isComputer = true;
					continue;
				}
			}
		}
	}
}

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

		if ( n2 >= 4 || n2 < 1 )
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


void Game_project3() // 369 games with multiple computers
{
	int lastValue = 1;
	int i = 0;
	int j = 0;
	int computer = 0;
	char input ;

	bool isComputer = true;

	printf("=========Game Start!=========\n");
	printf("How many computers are you going to play with?:");
	scanf("%d", &computer);

	while (lastValue < 30)
	{

		for (j = 0; j < computer; j++)
		{
			if (isComputer == true)
			{
				if (lastValue % 10 == 3 || lastValue % 10 == 6 || lastValue % 10 == 9)
				{
					printf("com:clap\n");
					lastValue++;
				}
				else
				{
					printf("com: %d\n", lastValue);
					lastValue++;
				}
			}
		}
		isComputer = false;


		if (isComputer == false)
		{
			printf("me:");
			scanf("%s", &input);

			if (strcmp(input, "clap") == 0)
			{
				if (lastValue % 10 == 3 || lastValue % 10 == 6 || lastValue % 10 == 9)
				{
					isComputer = true;
					lastValue++;
					continue;
				}
				else
				{
					printf("The computer won");
					break;
				}
			}
			else
			{
				int i = atoi(input);
				if (i != lastValue || i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
				{
					printf("\nThe computer won");
					isComputer = true;
					break;
				}
				else
				{
					isComputer = true;
					lastValue++;
					continue;
				}
			}
		}
	}
}

void Game_project4(void) //baskin31 games with mutiple computers
{
	int i = 0;
	int me = 0;
	int com = 1;
	int n2 = 0;
	int rnd = 0;
	int j = 0;
	int computer = 0;
	srand((unsigned)time(NULL));

	printf("======Game Start!======\n");
	printf("How many computers are you going to play with?:");
	scanf("%d", &computer);

	while (1)
	{
		for (j = 0; j < computer; j++)
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
			printf("\n");
			me = com;
		}
		
		/*rnd = rand() % 3 + 1;

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
		me = com;*/

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

int main()
{
	int i = 0;

	printf("Which game are you going to play?\n");
	printf("1.Playing 369 games with one computer\n");
	printf("2.Playing baskin_robins31 games with one computer\n");
	printf("3.369 games with multiple computers\n");
	printf("4.baskin_robins31 games with multiple computers\n");
	printf("Enter the number:");
	scanf("%d", &i);

	if (i == 1)
	{
		Game_project1();
	}
	else if (i == 2)
	{
		Game_project2();
	}
	else if (i == 3)
	{
		Game_project3();
	}
	else if (i == 4)
	{
		Game_project4();
	}
}