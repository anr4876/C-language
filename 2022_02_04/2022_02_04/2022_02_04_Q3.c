// ������ ����ϴ� �Լ�(print_str)�� ������ּ���.(%s ��� ����)
// ���� : %s�� ����� �� ����.

#include <stdio.h>

// �迭 �ּҰ��� ������ ���� �����ϸ� �迭�� �Ӽ��� �Ҿ������.
void print_str(char* str) {
	for (int i = 0; *(str + i) != '\0'; i++) {

		printf("%c", *(str + i));
	}
}

int main(void) {

	char str1[10];
	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = '\0';

	// print_str �Լ��� Ȱ���Ͽ� ���� str1 ��� ����
	print_str(str1);
	//��� => abc

	char str2[10];
	str2[0] = 'h';
	str2[1] = 'e';
	str2[2] = 'l';
	str2[3] = 'l';
	str2[4] = 'o';
	str2[5] = ' ';
	str2[6] = 'c';
	str2[7] = '\0';

	// print_str �Լ��� Ȱ���Ͽ� ���� str2 ��� ����
	print_str(str2);
	// ��� => hello c

	return 0;
}