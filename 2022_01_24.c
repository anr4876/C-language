#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수-> 연산 및 처리 하는 곳

int num_a = 10; // 전역변수 함수 밖의 함수 모든 함수에서 사용 가능

int a = 0;

int b = 220;

void test1() {
    int b = 120;
}


void test2(int b) {
    b = 200;
}


void test3() {
    b = 70;
}

int main(void) {

    // 매개변수, 리턴 -> 전역변수 사용하지 않고 함수간 데이터를 공유하기 위한 방판
    // 지역변수,매개변수 -> 실행후 삭제

    // 함수의 지역화 , 고립화 잘되면 자원관리가 효율적
    // 지역변수 -> 시스템에 의한 해제 대상
    // 지역변수 모아서 저장하고 관리하는 메모리 영역 -> 스택 메모리

    
    //문제 1 
    //int a = 10;
    //{
    //    int a = 20;
    //    {
    //        {
    //            int a = 30;
    //            {
    //                {
    //                    int a = 40;
    //                    {
    //                        int a = 50;
    //                    }
    //                }
    //                printf("%d\n", a); // 30
    //            }
    //        }
    //        printf("%d\n", a); // 20
    //    }
    //}
    //printf("%d\n", a); // 10

    // 문제 2
    int b = 110;

    if (0) {
        b = 20;
    }

    test1();

    if (1) {
        b = 30;
    }

    test2(180);

    if (1) {
        int b = 150;
    }

    test3();
   
    printf("%d", b);
    //a의 값은 무엇일까요?? 30



    return 0;
}
