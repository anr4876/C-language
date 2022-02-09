// 문제 : 문장에서 특정 문장의 위치를 리턴하는 함수를 만들어주세요.(get_index_of_str)
// 특정 문장이 포함되어 있지 않으면 -1을 리턴합니다.
// my_strncmp를 이용할 수 있습니다.

#include <stdio.h>

int main(void) {
	int index;

	index = get_index_of_str("abc", "b");
	printf("index : %d\n", index);
	// 출력 => index : 1

	index = get_index_of_str("test", "es");
	printf("index : %d\n", index);
	// 출력 => index : 1

	index = get_index_of_str("hello world", "wor");
	printf("index : %d\n", index);
	// 출력 => index : 6

	index = get_index_of_str("abcd", "bd");
	printf("index : %d\n", index);
	// 출력 => index : -1

	return 0;
}