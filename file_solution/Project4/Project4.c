#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <direct.h>		//mkdir
#include <errno.h>		//errno

int main()
{
	char copyFolder[] = { "C:\\dev\\c_exercise\\file_solution\\projec5" };
	// ���丮 �������� ������� �����̸�

	int nResult = _mkdir(copyFolder);

	if (nResult == 0)
	{
		printf("���� ���� ����");
	}
	else if (nResult == -1)
	{
		perror("���� ���� ���� - ������ �̹� �ְų� ����Ȯ��\n");
		printf("errorno : %d", errno);
	}

	return 0;
}