
// ���� : name1[0]�� �����ϸ� �ȵǴ� ������ �������ּ���.

#include <stdio.h>
#include <string.h>

int main(void) {
	char* name1 = "abc";

	printf("name1[0] : %c\n", name1[0]); // *(name1 + 0)
	printf("name1[1] : %c\n", name1[1]); // *(name1 + 1)

	// name1[0] = 's'; //*(name1 + 0) �� �ڵ尡 �ȵǴ� ������ �������ּ���. name1 ���� "abc" �� �ּҰ��� ����־ �Ұ��ϴ�.
	char name2[10] = "abc";
	printf("name2[0] : %c\n", name2[0]); // *(name2 + 0)
	printf("name2[1] : %c\n", name2[1]); // *(name2 + 1)
	// printf("%c\n", name2[0]); // *(name2 + 0)
	name2[0] = 'k';
	// printf("%c\n", name2[0]); // *(name2 + 0)
	printf("name2[0] : %c\n", name2[0]); // *(name2 + 0)

	return 0;
}