// ���� : name1[0]�� �����ϸ� �ȵǴ� ������ �������ּ���.

#include <stdio.h>
#include <string.h>

int main(void) {

	int a = 10;

	char* name1 = "abc";

	printf("name1[1] : %c\n", name1[1]);
	//name1[0] = 's'; // �� �ڵ尡 �ȵǴ� ������ �������ּ���.
	// name1[0] = 's' �� �ڵ�� ������ �ƴ϶� name1[] �� �ʱ�ȭ �� �� name[0] �� 's'�� �ִ� ���̴�.
	// *(name1 + 0)

	char name2[10] = "bbc";

	printf("name2 : %s\n", name2);
	name2[0] = 'k';
	printf("name2 : %s\n", name2);

	return 0;
}