#include "game.h"

void Game_project3(void) // 369 games with multiple computers
{
	int lastValue = 1;
	int i = 0;
	int j = 0;
	int computer = 0;
	char input[20];

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