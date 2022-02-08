// 문제 : 변수 str1, str2, str4의 값이 같은 이유를 설명해주세요.
// 
#include <stdio.h>

int main(void) {

	char* str1 = "abc";
	printf("str1 : %ld\n", (long)str1);

	char* str2 = "abc";
	printf("str2 : %ld\n", (long)str2);

	char* str3 = "abc";
	printf("str3 : %ld\n", (long)str3);

	char* str4 = "abc";
	printf("str4 : %ld\n", (long)str4);

	// 변수에다가 abc라는 값을 저장한것이 아닌 abc가 들어있는 주소값을 넣어서 값이 같다.

	// 배열 선언시에만 리터럴 문자열 대입 가능
	char str5[10] = "abc";
	printf("str5 : %s\n", *str5);


	return 0;
}