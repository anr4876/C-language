// ���� : ���� c�� ���� �������ּ���.
// ���� : c�� ���� ���� �ٲٴ� ���� �ȵ˴ϴ�.
// ���� : `c = 220;` �� �ȵ˴ϴ�.

#include <stdio.h>

int main(void) {

	unsigned char c = 200;

	// ���� ���� ���� ����
	unsigned char* pc = &c;

	*pc = 220;
	// ���� ���� ���� ��

	printf("c : %d\n", c);
	//��� => c : 220

	return 0;
}
