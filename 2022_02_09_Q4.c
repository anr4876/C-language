
// 문제 : int 없이, int*와 malloc을 사용해서 함수를 다시 만들어주세요.
// 조건 : 변수를 오직 1개만 사용할 수 있습니다.

#include <stdio.h>
#include <stdlib.h>

void print_99dan() {
	int* i = (int*)malloc(sizeof(int) * 2);


	for (*i = 2; *i < 10; (*i)++) {
		for (*(i+1) = 1; *(i+1) < 10; (*(i+ 1))++) {
			printf("%d X %d = %d\n", *i, *(i + 1), (*i) * (*(i + 1)));
		}
	}

}

int main(void) {

	print_99dan();

	return 0;
}
