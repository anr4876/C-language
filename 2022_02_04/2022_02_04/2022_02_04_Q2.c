#include <stdio.h>

int main(void) {

	// ���� a b c�� �迭�� �����ϰ� ������ּ���.
	char abc[] = "abc";

	for (int i = 0; i < sizeof(abc); i++) {
		printf("%c", abc[i]);
	}
	return 0;
}
