#define _CRT_SECURE_NO_WARNINGS

#define HAVE_STRUCT_TIMESPEC

#include <stdio.h>
#include <pthread.h>
#include <Windows.h>

int num = 0;

void* multiplication(void* data) {

    char* t_id = (char*)data;
    //t_id�� data�� ����Ű�� �ּҸ� ����Ŵ
    //����ŷ� ������ �� data �ּ� 0x0093f704, t_id �ּ� 0x0093f704 value�� "First "

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

    pthread_create(&thread[0], NULL, multiplication, (void*)&f1); //�����带 �����ϰ� �۵���Ų��
    pthread_create(&thread[1], NULL, multiplication, (void*)&f2);
    pthread_create(&thread[2], NULL, multiplication, (void*)&f3);

    pthread_join(thread[0], (void**)&joinStatus); //�����尡 ���������� ��ٸ���
    pthread_join(thread[1], (void**)&joinStatus);
    pthread_join(thread[2], (void**)&joinStatus);
   
}