#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#define NAME_SIZE 20
#include <stdio.h>
#include <stdlib.h>


int main(void) {

    // ����¿���
    /*
    ����� ���ڸ� �Է����ּ���. : 5[����]

    1��° ����� ���̸� �Է����ּ��� : 33[����]
    1��° ����� �̸��� �Է����ּ��� : aaa[����]
    2��° ����� ���̸� �Է����ּ��� : 50[����]
    2��° ����� �̸��� �Է����ּ��� : bbb[����]
    3��° ����� ���̸� �Է����ּ��� : 44[����]
    3��° ����� �̸��� �Է����ּ��� : ccc[����]
    4��° ����� ���̸� �Է����ּ��� : 23[����]
    4��° ����� �̸��� �Է����ּ��� : ddd[����]
    5��° ����� ���̸� �Է����ּ��� : 60[����]
    5��° ����� �̸��� �Է����ּ��� : eee[����]

    1��° ����� ����, �̸� : 33, aaa
    2��° ����� ����, �̸� : 50, bbb
    3��° ����� ����, �̸� : 44, ccc
    4��° ����� ����, �̸� : 23, ddd
    5��° ����� ����, �̸� : 60, eee

    */

    // �ѻ���� �̸��� �ִ� �����Ʈ ������ ���̳�?
    // 20����Ʈ

    //int ages[SIZE];
    //char names[SIZE * NAME_SIZE]; // 1
    //char names2[SIZE][NAME_SIZE]; // 2

    int count;
    printf("����� ���� �Է����ּ��� : ");
    scanf("%d", &count);

    int* ages = (int*)malloc(count * sizeof(int)); // ���� �����
    char** names = (char**)malloc(count * sizeof(char*));// �̸� �����

    //char (*names2)[20] = malloc(count * sizeof()) // 2���� �迭 ������

    for (int i = 0; i < count; i++) {
        printf("%d��° ����� ���̸� �Է����ּ��� :", i + 1);
        scanf("%d", ages + i);

        char* name = (char*)malloc(sizeof(char) * NAME_SIZE);
        printf("%d��° ����� �̸��� �Է����ּ��� :", i + 1);
        scanf("%s", name);
        *(names + i) = name;
        //scanf("%s", names2 + i);

    }

    for (int i = 0; i < count; i++) {
        printf("%d��° ����� �̸�, ���� : %s, %d\n", i + 1, *(names + i), ages[i]);

    }

    return 0;
}