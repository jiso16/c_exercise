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
				printf("\n����� �̰���ϴ�.");
				return 0;
			}
			com++;
			//printf("%d ", com);
		}
		me = com;
		printf("\n�̾�� ������ ������ �Է��ϼ���:");
		scanf(" %d", &n2);
		

		if (n2 >= 4 || n2==0)
		{
			printf("1~3 ���̸� �Է� �����մϴ�!\n");
			printf("��ǻ�Ͱ� �̰���ϴ�.");
			break;
		}
		

		for (i = 0; i < n2; i++)
		{
			printf("%d ", me);
			if (me == 31)
			{
				printf("\n��ǻ�Ͱ� �̰���ϴ�");
				return 0;
			}
			me++;
			
			//printf("%d ", me);

		}
		printf("\n");
		com = me;
		

	}
}