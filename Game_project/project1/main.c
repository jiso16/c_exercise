#include "game.h"

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
