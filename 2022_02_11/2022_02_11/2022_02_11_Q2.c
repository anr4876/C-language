#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdio.h>


int main(void) {

    // ����¿���
    /*
    ����� ���ڸ� �Է����ּ���. : 2[����]
    1��° ����� ���̸� �Է����ּ��� : 33[����]
    1��° ����� �̸��� �Է����ּ��� : aaa[����]
    2��° ����� ���̸� �Է����ּ��� : 50[����]
    2��° ����� �̸��� �Է����ּ��� : bbb[����]

    1��° ����� ����, �̸� : 33, aaa
    2��° ����� ����, �̸� : 50, bbb
    */

    // �ѻ���� �̸��� �ִ� �����Ʈ ������ ���̳�?
    // 20����Ʈ

    int ages[SIZE];
    char names[60]; // 1
    // char names2[3][20]; // 2

    int count;

    while (1) {
        printf("����� ���ڸ� �Է����ּ���. : ");
        scanf("%d", &count);
        printf("%d\n", count);

        if (count <= SIZE) {
            break;
        }
        else {
            printf("%d ���Ϸ� �Է����ּ���.\n", SIZE);
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d��° ����� ���̸� �Է����ּ��� :", i + 1);
        scanf("%d", ages + i);
        printf("%d��° ����� �̸��� �Է����ּ��� :", i + 1);
        scanf("%s", names + i * 20);
        //scanf("%s", names2 + i);

    }

    for (int i = 0; i < count; i++) {
        printf("%d��° ����� �̸�, ���� : %s, %d\n", i + 1, names + i, ages[i]);

    }

    return 0;
}