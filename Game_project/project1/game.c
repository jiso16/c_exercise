#include "game.h"


void Game_project1(void) //369 games with one computer
{
	int lastValue = 0;
	int i = 0;
	char input[20];

	bool isComputer = true;

	printf("=========Game Start!=========\n");

	while (lastValue < 30)
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

			if (strcmp(input, "clap") == 0)
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

