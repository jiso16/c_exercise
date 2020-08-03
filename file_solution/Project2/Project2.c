#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c = 0;

	FILE* fp = fopen("test2.txt", "r");

	if (fp == NULL)
	{
		puts(" 파일 열기 실패  ! ");
		return 1;
	}

	while (c != EOF) // EOF(end of file) 파일의 끝이 아닌 동안.
	{
		c = fgetc(fp);
		putchar(c);
	}

	fclose(fp);

	return 0;
}
