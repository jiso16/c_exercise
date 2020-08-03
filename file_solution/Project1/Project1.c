#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
    int state; //종료료제대로됬는지확인변수
    int i;
    char buf[100];

    FILE* fp = fopen("test.txt", "r");

    if (fp == NULL) 
    {
        printf("not open");

        return 1;
    }

    for (i = 0; i < 10; i++)
    {
        if (fgets(buf, sizeof(buf), fp) == NULL)
        {
            break;
        }
        printf("%s", buf);
    }
    state = fclose(fp);
    if (state != 0)
    {
        printf("not close");
        return 1;
    }
    return 0;
}
