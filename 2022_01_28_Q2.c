#include <stdio.h>

int main(void) {

    int p[5] = { 10, 20, 30, 40, 50 };
    // 1. �迭�� ����

    // 2. ������ ���� - []���� �ʰ�
    int* pp = &p;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));
    }
    // ��� :
    /*
       10
       20
       30
       40
       50
    */

    return 0;
}