// 문제 : name1[0]을 수정하면 안되는 이유를 설명해주세요.

#include <stdio.h>
#include <string.h>

int main(void) {

	int a = 10;

	char* name1 = "abc";

	printf("name1[1] : %c\n", name1[1]);
	//name1[0] = 's'; // 이 코드가 안되는 이유를 설명해주세요.
	// name1[0] = 's' 이 코드는 수정이 아니라 name1[] 을 초기화 한 후 name[0] 에 's'를 넣는 것이다.
	// *(name1 + 0)

	char name2[10] = "bbc";

	printf("name2 : %s\n", name2);
	name2[0] = 'k';
	printf("name2 : %s\n", name2);

	return 0;
}