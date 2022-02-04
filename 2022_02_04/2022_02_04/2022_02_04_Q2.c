#include <stdio.h>

int main(void) {

	// 문자 a b c를 배열에 저장하고 출력해주세요.
	char abc[] = "abc";

	for (int i = 0; i < sizeof(abc); i++) {
		printf("%c", abc[i]);
	}
	return 0;
}
