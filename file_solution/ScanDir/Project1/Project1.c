#include <stdio.h>

int main()
{
	char strPath[] = { "C:\\dev\\c_exercise\\file_solution\\ScanDir\\sample\\" };

	int nResult = remove(strPath);

	if (nResult == 0)
	{
		printf("파일 삭제 성공");
	}
	else if (nResult == -1)
	{
		perror("파일 삭제 실패");
	}

	return 0;
}