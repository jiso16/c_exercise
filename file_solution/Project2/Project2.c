#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c = 0;

	FILE* fp = fopen("test2.txt", "r");

	if (fp == NULL)
	{
		puts(" ���� ���� ����  ! ");
		return 1;
	}

	while (c != EOF) // EOF(end of file) ������ ���� �ƴ� ����.
	{
		c = fgetc(fp);
		putchar(c);
	}

	fclose(fp);

	return 0;
}
