// ���� : ���忡�� Ư�� ������ ��ġ�� �����ϴ� �Լ��� ������ּ���.(get_index_of_str)
// Ư�� ������ ���ԵǾ� ���� ������ -1�� �����մϴ�.
// my_strncmp�� �̿��� �� �ֽ��ϴ�.

#include <stdio.h>

int main(void) {
	int index;

	index = get_index_of_str("abc", "b");
	printf("index : %d\n", index);
	// ��� => index : 1

	index = get_index_of_str("test", "es");
	printf("index : %d\n", index);
	// ��� => index : 1

	index = get_index_of_str("hello world", "wor");
	printf("index : %d\n", index);
	// ��� => index : 6

	index = get_index_of_str("abcd", "bd");
	printf("index : %d\n", index);
	// ��� => index : -1

	return 0;
}