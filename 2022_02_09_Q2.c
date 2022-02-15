
#include <stdio.h>
#include <stdlib.h>
	
int* count() {
	int number = 5;

	int* num = malloc(number*sizeof(int));
	for (int i = 0; i < number; i++) {
		num[i] = i + 1;
	}
	return num;
}

int main(void) {

	// 사용자가 원하는 만큼 데이터를 저장해주세요.
	// 메모리를 효율적으로 사용해주세요.

	// 저장할 값의 개수 : 5

	// 1번째 값 : 1
	// 2번째 값 : 2
	// 3번째 값 : 3
	// 4번째 값 : 4
	// 5번째 값 : 5
	
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(count() + i));
	}
	// 출력 : 1 2 3 4 5

	return 0;
}