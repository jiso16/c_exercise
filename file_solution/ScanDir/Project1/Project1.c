#include <stdio.h>

int main()
{
	char strPath[] = { "C:\\dev\\c_exercise\\file_solution\\ScanDir\\sample\\" };

	int nResult = remove(strPath);

	if (nResult == 0)
	{
		printf("���� ���� ����");
	}
	else if (nResult == -1)
	{
		perror("���� ���� ����");
	}

	return 0;
}