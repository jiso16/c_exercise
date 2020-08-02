#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef enum {false, true} bool;

void game_project1();
void game_project2();
void game_project3();
void game_project4();


int main()
{
	int i = 0;

	while (1)
	{
		printf("which game are you going to play?\n");
		printf("1. Playing 369 with one computer\n");
		printf("2. Playing baskin_robins with one computer\n");
		printf("3. Playing 369 with multiple computers\n");
		printf("4. Playing baskin_robins with multiple computers\n");
		printf("If you want to finish the game, enter the number 5!\n");
		printf("Enter the number: ");
		scanf("%d", &i);

		if (i == 1)
		{
			game_project1();
		}
		if (i == 2)
		{
			game_project2();
		}
		if (i == 3)
		{
			game_project3();
		}
		if (i == 4)
		{
			game_project4();
		}
		if (i == 5)
		{
			break;
		}
	}

}

void game_project1()
{
	int i = 0;
	int lastvalue = 0;
	char input[20];
	bool isComputer = true;

	printf("============Game Start!==============\n");

	while (lastvalue < 30)
	{
		lastvalue++;

		if (isComputer == true)
		{
			if (lastvalue % 10 == 3 || lastvalue % 10 == 6 || lastvalue % 10 == 9)
			{
				printf("Com: clap\n" );
				isComputer = false;
			}
			else
			{
				printf("Com: %d\n", lastvalue);
				isComputer = false;
			}
		}
		else if (isComputer == false)
		{
			printf("Me: ");
			scanf("%s", &input);

			if (strcmp(input, "clap") == 0)
			{
				if (lastvalue % 10 == 3 || lastvalue % 10 == 6 || lastvalue % 10 == 9)
				{
					isComputer = true;
					continue;
				}
				else
				{
					printf("Computer Win!\n\n");
					break;
				}
			}
			else
			{
				int i = atoi(input);
				if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9 || lastvalue != i)
				{
					printf("Computer Win!\n\n");
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

void game_project2()
{
	int i, n2, me = 0;
	int com = 1;
	int rnd = 0;
	srand((unsigned)time(NULL));

	while (1)
	{
		rnd = rand() % 3 + 1;
		printf("Com: ");
		
		for (i = 0; i < rnd; i++)
		{
			printf("%d ", com);
			if (com == 31)
			{
				printf("You Win!\n\n");
				return 0;
			}
			com++;
		}

		me = com;
		printf("\nHow many numbers would you like to print out?");
		scanf("%d", &n2);
		if (n2 > 3 || n2 < 1)
		{
			printf("Only between 1 and 3\n");
			printf("Computer Win\n\n");
			break;
		}
		for (i = 0; i < n2; i++)
		{
			printf("Me:%d ", me);
			if (me == 31)
			{
				printf("Computer Win!\n\n");
				return 0;
			}
			me++;
		}
		printf("\n");
		com = me;
	}
}

void game_project3()
{
	int i, j = 0;
	int lastvalue = 1;
	int computer = 0;
	char input[20];
	bool isComputer = true;

	printf("============Game Start!==============\n");
	printf("How many computers are you going to play whit?:");
	scanf("%d", &computer);

	while (lastvalue < 30)
	{

		for (j = 0; j < computer; j++)
		{
			if (isComputer == true)
			{
				if (lastvalue % 10 == 3 || lastvalue % 10 == 6 || lastvalue % 10 == 9)
				{
					printf("Com: clap\n");
					lastvalue++;
				}
				else
				{
					printf("Com: %d\n", lastvalue);
					lastvalue++;
				}
			}
		}
		isComputer = false;
		if (isComputer == false)
		{
			printf("Me: ");
			scanf("%s", &input);

			if (strcmp(input, "clap") == 0)
			{
				if (lastvalue % 10 == 3 || lastvalue % 10 == 6 || lastvalue % 10 == 9)
				{
					isComputer = true;
					lastvalue++;
					continue;
				}
				else
				{
					printf("Computer Win!\n\n");
					break;
				}
			}
			else
			{
				int i = atoi(input);
				if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9 || lastvalue != i)
				{
					printf("Computer Win!\n\n");
					break;
				}
				else
				{
					isComputer = true;
					lastvalue++;
					continue;
				}
			}
		}
	}
}

void game_project4()
{
	int i, n2, me = 0;
	int com = 1;
	int rnd = 0;
	int computer = 0;
	srand((unsigned)time(NULL));

	printf("===========Game Star!===========\n");
	printf("How many computers are you going to play whit?:");
	scanf("%d", &computer);

	while (1)
	{
		for (int j = 0; j < computer; j++)
		{
			rnd = rand() % 3 + 1;
			printf("Com: ");

			for (i = 0; i < rnd; i++)
			{
				printf("%d ", com);
				if (com == 31)
				{
					printf("You Win!\n\n");
					return 0;
				}
				com++;
			}
		}

		me = com;
		printf("\nHow many numbers would you like to print out?");
		scanf("%d", &n2);

		if (n2 > 3 || n2 < 1)
		{
			printf("Only between 1 and 3\n");
			printf("Computer Win\n\n");
			break;
		}
		for (i = 0; i < n2; i++)
		{
			printf("Me:%d ", me);
			if (me == 31)
			{
				printf("Computer Win!\n\n");
				return 0;
			}
			me++;
		}
		printf("\n");
		com = me;
	}
}