#include <stdio.h>

int main(void) {

	printf("hello\n");

	// a ~ z까지 출력해주세요

	for (int i = 'a'; i <= 'z'; i++) {
		printf("%c", i);
	}
	// "hello" 리터널 문자열 => 주소

	char str[] = { 104, 101, 108, 108, 111, 0 };
	char str2[] = "hello";
	char* pstr = "hello";

	printf("\n");
	
	for (int i = 0; i < 6; i++) {
		printf("%c", pstr[i]);
	}
	
	printf("\n");
	
	for (int i = 0; i < 6; i++) {
		printf("%c", str[i]);
	}
	
	printf("\n");
	
	for (int i = 0; i < 6; i++) {
		printf("%c", str2[i]);
	}

	return 0;
}