// ���� : �迭�� �Ѽ��ϴ� change �Լ��� ������ּ���.

#include <stdio.h>
// ���⼭ change �Լ��� �������ּ���.

void change(int x[]) {
	
	for (int i = 0; i < 2; i++) {
		*(x + i) = 200 * (i + 1);
	}
	
	print("���⼭ �ٲ�")
	return 0;
}

// 1. �迭 ����
// 2. ������ ����

int main(void) {

	int x[2];
	x[0] = 100;
	x[1] = 200;
	//int x[2] = {100, 200}; // �� 3 �� �ڵ��� ���� �ǹ��̴�.

	printf("change �Լ��� ȣ�� ��, x[0] : %d, x[1] : %d\n", x[0], x[1]);

	printf("x�� ũ�� : %lu\n", sizeof(x));
	

	// ���⼭ change �Լ��� �������ּ���.
	change(x);

	printf("change �Լ��� ȣ�� ��, x[0] : %d, x[1] : %d\n", x[0], x[1]);
	// ��� => change �Լ��� ȣ���ϱ� ��, x[0] : 200, x[1] : 400

	return 0;
}