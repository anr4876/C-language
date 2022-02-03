#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// scanf를 이용해서 숫자 10개를 입력받아 배열에 저장한 후 출력해주세요.

	int arr[10];

	//1. 배열 문법 : [] 문법 이용

	//2. 포인터 문법 - []이용 X, 포인터 연산 이용
	for (int i = 0; i < 10; i++) {
		scanf("%d", arr + i);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d", *(arr + i));
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}