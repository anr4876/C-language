#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// scanf�� �̿��ؼ� ���� 10���� �Է¹޾� �迭�� ������ �� ������ּ���.

	int arr[10];

	//1. �迭 ���� : [] ���� �̿�

	//2. ������ ���� - []�̿� X, ������ ���� �̿�
	for (int i = 0; i < 10; i++) {
		scanf("%d", arr + i);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d", *(arr + i));
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}