#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#define NAME_SIZE 20
#include <stdio.h>
#include <stdlib.h>


int main(void) {

    // 입출력예시
    /*
    사람의 숫자를 입력해주세요. : 5[엔터]

    1번째 사람의 나이를 입력해주세요 : 33[엔터]
    1번째 사람의 이름을 입력해주세요 : aaa[엔터]
    2번째 사람의 나이를 입력해주세요 : 50[엔터]
    2번째 사람의 이름을 입력해주세요 : bbb[엔터]
    3번째 사람의 나이를 입력해주세요 : 44[엔터]
    3번째 사람의 이름을 입력해주세요 : ccc[엔터]
    4번째 사람의 나이를 입력해주세요 : 23[엔터]
    4번째 사람의 이름을 입력해주세요 : ddd[엔터]
    5번째 사람의 나이를 입력해주세요 : 60[엔터]
    5번째 사람의 이름을 입력해주세요 : eee[엔터]

    1번째 사람의 나이, 이름 : 33, aaa
    2번째 사람의 나이, 이름 : 50, bbb
    3번째 사람의 나이, 이름 : 44, ccc
    4번째 사람의 나이, 이름 : 23, ddd
    5번째 사람의 나이, 이름 : 60, eee

    */

    // 한사람의 이름을 최대 몇바이트 저장할 것이냐?
    // 20바이트

    //int ages[SIZE];
    //char names[SIZE * NAME_SIZE]; // 1
    //char names2[SIZE][NAME_SIZE]; // 2

    int count;
    printf("사람의 수를 입력해주세요 : ");
    scanf("%d", &count);

    int* ages = (int*)malloc(count * sizeof(int)); // 나이 저장소
    char** names = (char**)malloc(count * sizeof(char*));// 이름 저장소

    //char (*names2)[20] = malloc(count * sizeof()) // 2차원 배열 포인터

    for (int i = 0; i < count; i++) {
        printf("%d번째 사람의 나이를 입력해주세요 :", i + 1);
        scanf("%d", ages + i);

        char* name = (char*)malloc(sizeof(char) * NAME_SIZE);
        printf("%d번째 사람의 이름을 입력해주세요 :", i + 1);
        scanf("%s", name);
        *(names + i) = name;
        //scanf("%s", names2 + i);

    }

    for (int i = 0; i < count; i++) {
        printf("%d번째 사람의 이름, 나이 : %s, %d\n", i + 1, *(names + i), ages[i]);

    }

    return 0;
}