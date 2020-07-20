#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum { false, true } bool;
int main()
{
	int lastValue = 0;
	int i = 0;
	


	bool isComputer = true;
	bool isCorrect = true;

	printf("Game Start!\n");

	while (i < 30 && isCorrect)
	{
		lastValue = i;
		isCorrect = false;
		lastValue++;

		if (isComputer = true)
		{

			if (lastValue % 10 == 3 || lastValue % 10 == 6 || lastValue % 10 == 9)
			{
				printf("짝\n");
			}
			else
			{
				printf("%d\n", lastValue);
				isComputer = false;
			}
		}



		else(isComputer = false);
		{
			scanf("%d", &i);
			
			if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
			{
				printf("짝\n");
			}
			/*else
			{
				printf("%d", i);
			}*/
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