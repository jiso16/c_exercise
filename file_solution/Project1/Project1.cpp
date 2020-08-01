#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[])
{
	int ch;
	FILE* fr;
	FILE* fw;

	const char* out_filename = "copy.txt";

	unsigned long count = 0;

	if (argc != 2)
	{
		printf("usage : %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fr = fopen(argv[1], "r")) == NULL) // open a text file for reading
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fr = fopen(out_filename, "w")) == NULL) // open a text file for reading
	{
		printf("Can't open %s\n", out_filename);
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(fr)) != EOF)
	{
		fputc(ch, stdout);
		fputc(ch, fw);
		count++;
	}

	fclose(fr);
	fclose(fw);

	printf("FILE %s has %lu characters\n", argv[1], count);
	printf("copy to %s\n",out_filename);

	return 0;
}