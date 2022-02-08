
// 문제 : name1[0]을 수정하면 안되는 이유를 설명해주세요.

#include <stdio.h>
#include <string.h>

int main(void) {
	char* name1 = "abc";

	printf("name1[0] : %c\n", name1[0]); // *(name1 + 0)
	printf("name1[1] : %c\n", name1[1]); // *(name1 + 1)

	// name1[0] = 's'; //*(name1 + 0) 이 코드가 안되는 이유를 설명해주세요. name1 에는 "abc" 의 주소값이 들어있어서 불가하다.
	char name2[10] = "abc";
	printf("name2[0] : %c\n", name2[0]); // *(name2 + 0)
	printf("name2[1] : %c\n", name2[1]); // *(name2 + 1)
	// printf("%c\n", name2[0]); // *(name2 + 0)
	name2[0] = 'k';
	// printf("%c\n", name2[0]); // *(name2 + 0)
	printf("name2[0] : %c\n", name2[0]); // *(name2 + 0)

	return 0;
}