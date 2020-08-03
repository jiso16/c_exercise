#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <direct.h>		//mkdir
#include <errno.h>		//errno

int main(void)
{
	char copyFolder[] = { "C:\\dev\\c_exercise\\file_solution\\copyFile" };
	// 디렉토리 마지막은 만들려는 폴더이름

	int nResult = _mkdir(copyFolder);

	if (nResult == 0)
	{
		printf("폴더 생성 성공\n");
	}
	else if (nResult == -1)
	{
		perror("폴더 생성 실패 - 폴더가 이미 있거나 부정확함\n");
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
	printf("성공적으로 복사가 완료되었습니다!\n");

	fclose(sfp);
	fclose(dfp);

	dfp = fopen("C:\\dev\\c_exercise\\file_solution\\copyFile\\copy.txt", "r");

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
