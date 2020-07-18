#include <stdio.h>

int main()
{
	int i, j = 0;
	printf("단수를 입력하세요:");
	scanf("%d", &i);
	for (j = 1; j < 10; j++)
	{
		printf("%d * %d = %d \n", i, j, i * j);
	}

}