#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	FILE* sfp;
	FILE* dfp;
	char c = 0;

	char copy;
	char source[50], dest[50];

	//scanf("%s %s", source, dest);

	sfp = fopen("test.txt", "r");
	dfp = fopen("copy.txt", "w");

	while (!feof(sfp))
	{
		copy = fgetc(sfp);
		fputc(copy, dfp);
	}
	printf("성공적으로 복사가 완료되었습니다!\n");

	fclose(sfp);
	fclose(dfp);

	dfp = fopen("copy.txt", "r");

	if (dfp == NULL)
	{
		puts(" 파일 열기 실패  ! ");
		return 1;
	}

	while (c != EOF) // EOF(end of file) 파일의 끝이 아닌 동안.
	{
		c = fgetc(dfp);
		putchar(c);
	}

	fclose(dfp);

	return 0;
}