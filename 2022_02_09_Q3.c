// ���� : int ����, int*�� malloc�� ����ؼ� �Լ��� �ٽ� ������ּ���.

#include <stdio.h>
#include <stdlib.h>

int* print_99dan() {
    int* dan;
    int* i;
    dan = malloc(sizeof(int)); // int ũ���� �޸� ������ �����Ҵ��� �ް� 
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