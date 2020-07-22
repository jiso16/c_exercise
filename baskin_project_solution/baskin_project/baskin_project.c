#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

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
				printf("\n당신이 이겼습니다.");
				return 0;
			}
			com++;
			//printf("%d ", com);
		}
		me = com;
		printf("\n이어나갈 숫자의 개수를 입력하세요:");
		scanf(" %d", &n2);
		

		if (n2 >= 4 || n2==0)
		{
			printf("1~3 사이만 입력 가능합니다!\n");
			printf("컴퓨터가 이겼습니다.");
			break;
		}
		

		for (i = 0; i < n2; i++)
		{
			printf("%d ", me);
			if (me == 31)
			{
				printf("\n컴퓨터가 이겼습니다");
				return 0;
			}
			me++;
			
			//printf("%d ", me);

		}
		printf("\n");
		com = me;
		

	}
}