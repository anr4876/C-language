
#include <stdio.h>
#include <stdlib.h>
	
int* count() {
	int number = 5;

	int* num = malloc(number*sizeof(int));
	for (int i = 0; i < number; i++) {
		num[i] = i + 1;
	}
	return num;
}

int main(void) {

	// ����ڰ� ���ϴ� ��ŭ �����͸� �������ּ���.
	// �޸𸮸� ȿ�������� ������ּ���.

	// ������ ���� ���� : 5

	// 1��° �� : 1
	// 2��° �� : 2
	// 3��° �� : 3
	// 4��° �� : 4
	// 5��° �� : 5
	
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(count() + i));
	}
	// ��� : 1 2 3 4 5

	return 0;
}