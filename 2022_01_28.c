#include <stdio.h>

int main(void) {

	char a = 10;
	char b = 20;

	printf("%d\n", (int)&a);
	printf("%d\n", (int)&b);

	// � �������� �ּҸ� �����ϸ� -> �ش� ���� Ÿ���� ������ Ÿ������ ���

	char* pa = &a;


	printf("%d\n", (int)pa);

	pa = pa + 32;  // a�� �ּҸ� a�� b�� ���̸�ŭ �������־����� -> b�� �ּ�

	printf("%d\n", (int)pa);
	
	// �ڷ����� ũ�Ⱑ �ٸ���

	long long int c = 10;
	long long int d = 20;

	printf("%d\n", (int)&c);
	printf("%d\n", (int)&d);

	long long int* pc = &c; // c�� �ּҸ� pc �� ����

	printf("%d\n", (int)pc); // c�� �ּҸ� ���

	pc = pc + 4; // 8����Ʈ�� long long int�� 8����Ʈ�� �����δ�. ���� 32����Ʈ�� �Ÿ��� �ִٸ� 4�� �������� �Ѵ�.

	printf("%d\n", (int)pc); // d�� �ּҸ� ����ϴ� �ڵ�


	// ������ �Ͽ��� �ٿ��� ������ִ� �ڵ� -> �迭

	// �ڷ���, ����, ���� �ּ�
	int arr[5]; // �迭����

	// arr -> �迭�̸�. �� == ���� �ּҰ�(�迭 ����� ����� Ÿ������ ���)
								  
	for (int i =  0; i < 5; i++) {

		printf("arr + %d : %d\n", i, (int)(arr + i));   // arr��  1ĭ �� 4����Ʈ �������� ���� ĭ�� �ּҸ� �Է����ش�.
		*(arr + i) = 10 + (i*10);						// arr�� �ּ� �ȿ��� ĭ(4����Ʈ)���� ���� �־��ش�
	
		printf("%d\n", *(arr + i));						// arr�� ���� ����ϴ� 2���� ���
		printf("%d\n", *(i + arr));
		printf("%d\n", arr[i]);							// �迭�� ũ��� ĭ(�ڷ����� ũ��)�̴�. �迭�� n��° ���� 
														// n * (�ڷ����� ũ�� �� ����Ʈ) �� ��ġ�Ѵ�
	}



	
	return 0;
}