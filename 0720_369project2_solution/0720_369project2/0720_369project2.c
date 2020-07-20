#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum { false, true } bool;
int main()
{
	int lastValue = 0;
	int i = 0;
	char c1;



	bool isComputer = true;
	bool isCorrect = true;

	printf("Game Start!\n");

	while (lastValue < 30 && isCorrect)
	{
		//lastValue = i;
		isCorrect = false;
		lastValue++;

		if (isComputer = true)
		{

			if (lastValue % 10 == 3 || lastValue % 10 == 6 || lastValue % 10 == 9)
			{
				printf("com: Â¦\n");
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
			scanf("%s", &c1);

			if (c1 == 'Â¦')
			{
				printf("\n");

				lastValue += 1;
			}
			/*else if (c1 % 10 == 3 || c1 % 10 == 6 || c1 % 10 == 9)
			{
				printf("°ÔÀÓ¿¡¼­ Á³½À´Ï´Ù");
			}
			*/
			else
			{
				lastValue += 1;

			}
		}



		if (i == lastValue)
		{
			isCorrect = false;
		}
		else
		{
			isCorrect = true;

		}
	}

	

}