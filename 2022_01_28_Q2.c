#include <stdio.h>

int main(void) {

    int p[5] = { 10, 20, 30, 40, 50 };
    // 1. 배열의 문법

    // 2. 포인터 문법 - []쓰지 않고
    int* pp = &p;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));
    }
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