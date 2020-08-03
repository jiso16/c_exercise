#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <direct.h>		//mkdir
#include <errno.h>		//errno

int main(void)
{
	char copyFolder[] = { "C:\\dev\\c_exercise\\file_solution\\copyFile" };
	// ���丮 �������� ������� �����̸�

	int nResult = _mkdir(copyFolder);

	if (nResult == 0)
	{
		printf("���� ���� ����\n");
	}
	else if (nResult == -1)
	{
		perror("���� ���� ���� - ������ �̹� �ְų� ����Ȯ��\n");
		printf("errorno : %d", errno);
	}
	

	FILE* sfp;
	FILE* dfp;
	char c = 0;
	char copy;
	char source[50], dest[50];

	sfp = fopen("C:\\dev\\c_exercise\\file_solution\\sourceFile\\test.txt", "r");
	dfp = fopen("C:\\dev\\c_exercise\\file_solution\\copyFile\\copy.txt", "w");

	while (!feof(sfp))
	{
		copy = fgetc(sfp);
		fputc(copy, dfp);
	}
	printf("���������� ���簡 �Ϸ�Ǿ����ϴ�!\n");

	fclose(sfp);
	fclose(dfp);

	dfp = fopen("C:\\dev\\c_exercise\\file_solution\\copyFile\\copy.txt", "r");

	if (dfp == NULL)
	{
		puts(" ���� ���� ����  ! ");
		return 1;
	}

	while (c != EOF) // EOF(end of file) ������ ���� �ƴ� ����.
	{
		c = fgetc(dfp);
		putchar(c);
	}

	fclose(dfp);

	return 0;
	
}
