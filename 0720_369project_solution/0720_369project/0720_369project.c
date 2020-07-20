#include <stdio.h>
typedef enum { false, true } bool;
int main()
{
	int lastValue = 0;
	int i = 0;
	bool isComputer = true;
	bool isCorrect = true;

	while (i < 30 && isCorrect)
	{
		isCorrect = false;
		lastValue++;

		if (isComputer)
		{

			if (lastValue % 10 == 3)
			{
				printf("?");
			}
			else
			{
				printf("%d", lastValue);
			}
		}
		else
		{
			scanf("%d", &i);
			if (i % 10 == 3)
			{
				printf("?");
			}
			else
			{
				printf("%d", i);
			}
			if ( i == lastValue) 
			{
				isCorrect = true
			}
			else 
			{
				isCorrect = false
			}
		}
	}
}