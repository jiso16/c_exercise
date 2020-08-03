#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <direct.h>		//mkdir
#include <errno.h>		//errno

int main()
{
	char copyFolder[] = { "C:\\dev\\c_exercise\\file_solution\\projec5" };
	// 디렉토리 마지막은 만들려는 폴더이름

	int nResult = _mkdir(copyFolder);

	if (nResult == 0)
	{
		printf("폴더 생성 성공");
	}
	else if (nResult == -1)
	{
		perror("폴더 생성 실패 - 폴더가 이미 있거나 부정확함\n");
		printf("errorno : %d", errno);
	}

	return 0;
}