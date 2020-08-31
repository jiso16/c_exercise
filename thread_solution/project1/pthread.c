#define _CRT_SECURE_NO_WARNINGS

#define HAVE_STRUCT_TIMESPEC

#include <stdio.h>
#include <pthread.h>
#include <Windows.h>

int num = 0;

void* multiplication(void* data) {

    char* t_id = (char*)data;
    //t_id는 data가 가르키는 주소를 가르킴
    //디버거로 찍어봤을 때 data 주소 0x0093f704, t_id 주소 0x0093f704 value는 "First "

    for (int i = 0; i < 10; i++) {
        printf("%s : %d x %d = %d\n", t_id,num, i, num*i);
        Sleep(500);
    }
    return NULL;
}


int main() {
    
    printf("Enter a number to multipliaction: ");

    scanf("%d", &num);

    pthread_t thread[3];

    int joinStatus;
    char f1[] = "First  ";
    char f2[] = "Second ";
    char f3[] = "Third  ";

    pthread_create(&thread[0], NULL, multiplication, (void*)&f1); //스레드를 생성하고 작동시킨다
    pthread_create(&thread[1], NULL, multiplication, (void*)&f2);
    pthread_create(&thread[2], NULL, multiplication, (void*)&f3);

    pthread_join(thread[0], (void**)&joinStatus); //스레드가 끝날때까지 기다린다
    pthread_join(thread[1], (void**)&joinStatus);
    pthread_join(thread[2], (void**)&joinStatus);
   
}