# define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {

	int num1;
	int num2;


	// ����ڸ��� ����� ����ϴ�Ƚ���� �ٸ��� ������ ���� �� ����.
	// �ٛ����� �����Ͻÿ�.

	// �ݺ��� => Ư�� �ڵ带 �ݺ�
	// �ݺ��� ����
	// break -> �ݺ����� �� ��� ����.
	// continue -> �� ��� ���� ȸ���� �Ѿ.
	/*while(1)
	{
		printf("�ΰ��� ���ڸ� �������� �����ؼ� �Է����ּ��� :");
		scanf("%d %d", &num1, &num2);
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
	}*/
	// main ������ ����
	int count = 0;
	while (1)
	{
		if (count == 10) {
			break;
		}
		count ++;
		printf("�ݺ�Ƚ�� : %d\n", count);
		
	
	}
	count = 0;

	while (count < 10)
	{
		count++;
		printf("�ݺ�Ƚ�� : %d\n", count);


	}
	// (����;��; ������)
	// for�� ���� �ȿ����� ���� 
	for (int count = 0; count < 10; count++) {
		printf("�ݺ�Ƚ�� : %d\n", count);
	}

	// �ݺ��� -> while, for
	// while -> ������ ���� ���
	// for -> ������ �ִ� ���. ������ �ٷ�� ���
	// �ݺ����� �����ϴ� ���� -> �ݺ�Ƚ���� ���� �ݺ� ������ ������Ű�ų�,
	// break Ű���带 ����� ���� �� ���� ������.
	
	//==============================================================================================
	// ���� (����)
	//==============================================================================================

	// 1. 1 ~ 100���� ���
	for (int count = 1; count < 101; count++) {
		printf("%d\n", count);
	}
	printf("\n");
	// 2. -25 ~ 50���� ���
	for (int count = -25; count <= 50; count++) {
		printf("%d\n", count);
	}
	printf("\n");
	// 3. 1 ~ 100 ���� ¦���� ���

	for (int count =2; count <= 100; count += 2) {
		printf("%d\n", count);
	}
	printf("\n");
	// 4. 100 ~ 200 ������ Ȧ���� ���
	for (int count = 100; count <= 200; count += 1) {
		if (count % 2 == 1) {
			printf("%d\n", count);

		}
	}
	printf("\n");
	// 5. 1 ~ 500 ������ �� �� 4�� ����� ���
	for (int count = 1; count <= 500; count++ ) {
		if (count % 4 == 0) {
			printf("%d\n", count);

		}
	}
	printf("\n");

	// 6. 1 ~ 1000 ������ �� �� 1000�� ����� ��� -> 1000 % a == 0
	// ��� -> 1000�� a�� �������� �� ������ �������� a�� 1000�� ������ �Ѵ�.
	// ����� 1 ~ �ڱ��ڽŸ� ��� ���� �Ѵ�.
	// ������ �������ٴ� ���� �������� �� �������� 0�̶�� ���� �ǹ��Ѵ�.

	
	for (int count = 1; count <= 1000; count++) {
		if (1000 % count == 0) {
			printf("%d\n", count);
		}
	}
	printf("\n");



	// 7. 1 ~ 1000 ������ �� �� 3�� ��� �̸鼭 5�� ����� ���� ���


	for (int count = 1; count <= 1000; count++) {
		if (count % 3 == 0) {
			if (count % 5 == 0) {
				printf("%d\n", count);
			}
		}
	}
	printf("\n");


	//==============================================================================================
	// ���� (����� �Ҽ� ���ϱ�)
	//==============================================================================================

	 // 1. 1 ~ 10������ ���� �����ּ���. (�� : 55)
	int num = 0;
	for (int count = 1; count < 11; count++) {
		num += count;
	}
	printf("%d\n", num);
	printf("\n");
  
	// 2. 10�� ����� ������ �����ּ���. (�� : 4)
	
	num = 0;
	
	for (int count = 1; count < 11; count++) {
		if (10 % count == 0) {
			num++;
		}

	}
	printf("%d\n", num);
	printf("\n");


	// 3. 10�� ����� ���� �����ּ���. (�� : 18)
	
	num = 0;
	
	for (int count = 1; count < 11; count++) {
		if (10 % count == 0) {
			num += count;
		}
	}
	printf("%d\n", num);
	printf("\n");



  // 4. 7�� �Ҽ����� �Ǻ��ϰ� �Ҽ���� '�Ҽ�'�� ���, �ƴ϶�� '��Ҽ�'�� ������ּ���. (�� : �Ҽ�)
  // �Ҽ��� 1�� �ڱ� �ڽŸ��� ����� ���� ���� ���մϴ�.
	
	for (int count = 1; count <= 7; count++) {
		if (7 % count == 0 && count != 7 && count != 1) {
			printf("��Ҽ�");
			break;
			

		}
		if (count = 7) {
			printf("�Ҽ�");
		}


		

	}
	














	return 0;
}