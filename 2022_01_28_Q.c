// p�� a,b,c,d,e�� ��� ������ּ���.

#include <stdio.h>

int main(void) {

    int e = 50;
    int d = 40;
    int c = 30;
    int b = 20;
    int a = 10;

    printf("a�� �ּ� : %ld\n", (long)&a);
    printf("b�� �ּ� : %ld\n", (long)&b);
    printf("c�� �ּ� : %ld\n", (long)&c);
    printf("d�� �ּ� : %ld\n", (long)&d);
    printf("e�� �ּ� : %ld\n", (long)&e);

    int* p = &a;
    printf("p�� ��   : %ld\n", (long)p);

    // ���� ����
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *p);
        p = p - 8;                        // a�� �ּҸ� (-)�������� 8��ŭ �̵�
    }
    // ���� ��


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