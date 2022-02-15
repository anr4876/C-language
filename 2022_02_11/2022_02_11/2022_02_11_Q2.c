#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdio.h>


int main(void) {

    // 입출력예시
    /*
    사람의 숫자를 입력해주세요. : 2[엔터]
    1번째 사람의 나이를 입력해주세요 : 33[엔터]
    1번째 사람의 이름을 입력해주세요 : aaa[엔터]
    2번째 사람의 나이를 입력해주세요 : 50[엔터]
    2번째 사람의 이름을 입력해주세요 : bbb[엔터]

    1번째 사람의 나이, 이름 : 33, aaa
    2번째 사람의 나이, 이름 : 50, bbb
    */

    // 한사람의 이름을 최대 몇바이트 저장할 것이냐?
    // 20바이트

    int ages[SIZE];
    char names[60]; // 1
    // char names2[3][20]; // 2

    int count;

    while (1) {
        printf("사람의 숫자를 입력해주세요. : ");
        scanf("%d", &count);
        printf("%d\n", count);

        if (count <= SIZE) {
            break;
        }
        else {
            printf("%d 이하로 입력해주세요.\n", SIZE);
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d번째 사람의 나이를 입력해주세요 :", i + 1);
        scanf("%d", ages + i);
        printf("%d번째 사람의 이름을 입력해주세요 :", i + 1);
        scanf("%s", names + i * 20);
        //scanf("%s", names2 + i);

    }

    for (int i = 0; i < count; i++) {
        printf("%d번째 사람의 이름, 나이 : %s, %d\n", i + 1, names + i, ages[i]);

    }

    return 0;
}