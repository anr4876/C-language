#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	

	// �ܼ� �Է� ->

	// �Է°��� ������ ����
	int data;
	float data2;
	//printf("%d", data); // ���Ĺ��� �ʿ�
	scanf("%d", &data); // �Է��� ���� ���� ���� ���� �ʿ� 
	scanf("%f", &data2); 

	printf("%d\n", data);
	printf("%f\n", data2);


	int year;
	int month;
	int day;
	/*
	scanf("%d", &year);
	scanf("%d", &month);
	scanf("%d", &day);
	*/
	
	printf("����� ������ �Է����ּ��� (����-> 1990-12-12) :");
	scanf("%d-%d-%d", &year, &month, &day) ; // %d�� %d ���̿� �ִ� ���ڳ� ������ �Է��� �Ϸ��ϴ� �����̴�.

	printf("%d�� %d�� %d���Դϴ�.", year, month, day);
	// �Է��� �Ϸ��ϴ� ������ ����� �ٹٲ��̴�.


	// ��� ������
	// ���ϱ� : +
	// ���� : -
	// ���ϱ� : *
	// ������ : /
	// ������ : %



	return 0;
}
	