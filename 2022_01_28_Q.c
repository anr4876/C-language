// p로 a,b,c,d,e를 모두 출력해주세요.

#include <stdio.h>

int main(void) {

    int e = 50;
    int d = 40;
    int c = 30;
    int b = 20;
    int a = 10;

    printf("a의 주소 : %ld\n", (long)&a);
    printf("b의 주소 : %ld\n", (long)&b);
    printf("c의 주소 : %ld\n", (long)&c);
    printf("d의 주소 : %ld\n", (long)&d);
    printf("e의 주소 : %ld\n", (long)&e);

    int* p = &a;
    printf("p의 값   : %ld\n", (long)p);

    // 수정 시작
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *p);
        p = p - 8;                        // a의 주소를 (-)방향으로 8만큼 이동
    }
    // 수정 끝


    // 출력 :
    /*
       10
       20
       30
       40
       50
    */







    return 0;
}