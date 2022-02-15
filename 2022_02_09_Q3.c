// 문제 : int 없이, int*와 malloc을 사용해서 함수를 다시 만들어주세요.

#include <stdio.h>
#include <stdlib.h>

int* print_99dan() {
    int* dan;
    int* i;
    dan = malloc(sizeof(int)); // int 크기의 메모리 영역을 동적할당을 받고 
    i = malloc(sizeof(int));
    for (*dan = 2; *dan < 10; (*dan)++) {
        for (*i = 1; *i < 10; (*i)++) {
            printf("%d * %d = %d\n", *dan, *i, (*dan) * (*i));
        }
    }
    return dan;
}

int main(void) {

    print_99dan();
    

    return 0;
}