#include <stdio.h>
// �� ���ڿ��� ������ �����ִ� �Լ��� ������ּ���. �� ���ڿ��� ������ 1, �ƴϸ� 0�� �����մϴ�.
int my_strcmp(char* str1, char* str2) {
	int num = 1;
	for (int i = 0; i < sizeof(str1); i++) {
	
		if (*(str1 + i) == *(str2 + i))
			num = 0;
		
	}

	return num;
}

int main(void) {

	int rst;

	rst = my_strcmp("abc", "abc");
	printf("%d\n", rst); // ��� : 1

	rst = my_strcmp("abc", "abd");
	printf("%d\n", rst); // ��� : 0

	rst = my_strcmp("hello world", "hello");
	printf("%d\n", rst); // ��� : 0

	rst = my_strcmp("hello world", "hello world");
	printf("%d\n", rst); // ��� : 1

	return 0;
}