#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>

typedef enum { false, true } bool;

void game1();
bool checkGameRule(int input);

int main()
{
	int i = 0;
	printf("Enter the number:");
	scanf("%d", &i);

	if (i == 1)
	{
		game1();
	}
}


void game1()
{
	int i = 0;
	int lastvalue = 0;
	int me = 0;
	char input[20];
	bool isComputer = false;

	for (i = 0; i < 30; i++)
	{
		lastvalue++;

		if (isComputer == true)
		{
			if (checkGameRule(lastvalue))
			{
				printf("Com: clap\n");
			}
			else
			{
				printf("Com: %d\n", lastvalue);
			}
			isComputer = false;
		}
		else if (isComputer == false)
		{
			printf("Me: ");
			scanf("%s", &input);
			if (strcmp(input, "clap") == 0)
			{
				if (checkGameRule(lastvalue))
				{
					isComputer = true;
					continue;
				}
				else
				{
					printf("Computer Win\n\n");
					break;
				}
			}
			else
			{
				int me = atoi(input);
				if (checkGameRule(me) || me != lastvalue)
				{
					printf("Computer Win\n\n");
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

bool checkGameRule(int input)
{
	if (input % 10 == 3 || input % 10 == 6 || input % 10 == 9) {
		return true;
	}
	else
	{
		return false;
	}
}

