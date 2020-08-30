#define _CRT_SECURE_NO_WARNINGS

#define HAVE_STRUCT_TIMESPEC

#include <stdio.h>
#include <pthread.h>
#include <Windows.h>



void* doFoo(void* data) {

    int t_id = *((int*)data);

    for (int i = 0; i < 10; i++) {
        printf("thread id(%d) : %d\n", t_id, i);
        Sleep(500);
    }

    return NULL;
}


int main() {

    pthread_t thread[3];

    int joinStatus;
    int f1 = 1;
    int f2 = 2;
    int f3 = 3;

    pthread_create(&thread[0], NULL, doFoo, (void*)&f1); //스레드를 생성하고 작동시킨다
    pthread_create(&thread[1], NULL, doFoo, (void*)&f2);
    pthread_create(&thread[2], NULL, doFoo, (void*)&f3);

    pthread_join(thread[0], (void**)&joinStatus); //스레드가 끝날때까지 기다린다
    pthread_join(thread[1], (void**)&joinStatus);
    pthread_join(thread[2], (void**)&joinStatus);

    printf("Main End!");

}

