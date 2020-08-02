#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

typedef enum {true, false} bool;

void project1();
void project2();
void project3();
void project4();

int main()
{
	int i = 0;
	while (1)
	{
		printf("which game are you going to play?\n");
		printf("1.Playing 369 with one computer\n");
		printf("2.Playing baskin_robins with one computer\n");
		printf("3.Playing 369 with multiple computers\n");
		printf("4.Playing baskin_robins with multiple computers\n");
		printf("If you want to finish the game, enter the number 5.\n\n");
		printf("Enter the number: ");
		scanf("%d", &i);

		if (i == 1)
		{
			project1();
		}
		else if (i == 2)
		{
			project2();
		}
		else if (i == 3)
		{
			project3();
		}
		else if (i == 4)
		{
			project4();
		}
		else if (i == 5)
		{
			break;
		}
	}
}

void project1()
{
	int i = 0;
	int lastvalue = 0;
	char input[20];
	bool isComputer = true;

	printf("Game Start!\n\n");

	while (lastvalue < 30)
	{
		lastvalue++;

		if (isComputer == true)
		{
			if (lastvalue % 10 == 3 || lastvalue % 10 == 6 || lastvalue % 10 == 9)
			{
				printf("Com: Clap\n");
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
					printf("Computer Win!\n");
					break;
				}
			}
			else
			{
				int i = atoi(input);
				if (i != lastvalue || i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
				{
					printf("Computer Win\n");
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

void project2()
{
	int i,me, n2, rnd = 0;
	int com = 1;
	srand((unsigned)time(NULL));

	printf("Game Start!\n");
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
				break;
			}
			com++;
		}
		printf("\n");
		me = com;

		printf("How many numbers would you like to print out?");
		scanf("%d", &n2);
		if (n2 > 3 || n2 < 1)
		{
			printf("Onlt between 1 and 3\n");
			printf("Computer WIn\n\n");
			break;
		}
		for (i = 0; i < n2; i++)
		{
			printf(" Me: %d", me);
			if (me == 31)
			{
				printf("Computer Win!\n\n");
				break;
			}
			me++;
		}
		printf("\n");
		com = me;
	}
}

void project3()
{
	int i,j = 0;
	int lastvalue = 1;
	int computer = 0;
	char input[20];
	bool isComputer = true;

	printf("Game Start!\n\n");
	printf("How many computers would you like play with?");
	scanf("%d", &computer);

	while (lastvalue < 30)
	{
		//lastvalue++;

		for (j = 0; j < computer; j++)
		{
			if (isComputer == true)
			{
				if (lastvalue % 10 == 3 || lastvalue % 10 == 6 || lastvalue % 10 == 9)
				{
					printf("Com: Clap\n");
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
					printf("Computer Win!\n");
					break;
				}
			}
			else
			{
				int i = atoi(input);
				if (i != lastvalue || i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
				{
					printf("Computer Win\n");
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

void project4()
{
	int i, j, me, n2, rnd = 0;
	int com = 1;
	int computer = 0;
	srand((unsigned)time(NULL));

	printf("Game Start!\n");
	printf("How many computers would you like play with?");
	scanf("%d", &computer);

	while (1)
	{
		for (j = 0; j < computer; j++)
		{
			rnd = rand() % 3 + 1;
			printf("Com: ");

			for (i = 0; i < rnd; i++)
			{
				printf("%d ", com);
				if (com == 31)
				{
					printf("You Win!\n\n");
					break;
				}
				com++;
			}
		}
		printf("\n");
		me = com;

		printf("How many numbers would you like to print out?");
		scanf("%d", &n2);
		if (n2 > 3 || n2 < 1)
		{
			printf("Onlt between 1 and 3\n");
			printf("Computer WIn\n\n");
			break;
		}
		for (i = 0; i < n2; i++)
		{
			printf(" Me: %d", me);
			if (me == 31)
			{
				printf("Computer Win!\n\n");
				break;
			}
			me++;
		}
		printf("\n");
		com = me;
	}
}
