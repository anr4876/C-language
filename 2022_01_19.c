#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {

	int num_s;

	printf("������ �Է��� �ּ��� : ");
	scanf("%d", &num_s);

	if (num_s > 100 || num_s < 0) {printf("�߸��� �����Է��Դϴ�.");}
	else if (num_s >= 90) {printf("A");}
	else if (num_s >= 80) {printf("B");}
	else if (num_s >= 70) {printf("C");}
	else if (num_s >= 60) {printf("D");}
	else if (num_s < 60) {printf("F");}

	printf("\n");

	
	// �������� -> �� ������ �����ؼ� ���ο� �ϳ��� ���� ����
	// ����(and) - &&
	// ����(or) - || : �� ������ ��� 0�� ���� 0 ������ 1

	 // ===========================================================================================
	 // ���� -
  	 // ===========================================================================================
	
	
	int num_1;
	int num_2;
	int num_3;
	int num_4;

	scanf_s("%d %d %d", &num_1, &num_2, &num_3);
	
	if (num_1 % 2 == 0) {
		printf("%d\n", num_1);
		
	}
	if (num_2 % 2 == 0) {
		printf("%d\n", num_2);
	}
	if (num_3 % 2 == 0) {
		printf("%d\n", num_3);
	}


	if (num_1 % 2 == 0) {
		printf("even\n");
	}
	else printf("odd\n");

	if (num_2 % 2 == 0) {
		printf("even\n");
	}
	else printf("odd\n");
	
	if (num_3 % 2 == 0) {
		printf("even\n");
	}
	else printf("odd\n");
	
	scanf_s("%d", &num_4);

	if (num_4 < 0) {
		printf("minus");

	}
	else printf("plus");
	if (num_4 % 2 == 0) {
		printf("even");
	}
	else printf("add");
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}