#include <stdio.h>

void change(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) {


	//char c; // 1
	//char* pc;

	//short s;// 2
	//short* ps;

	//int i;// 4
	//int* pi;

	//long l;// 4
	//long* pl;

	//float f;// 4
	//float* pf;

	//double d;// 8
	//double* pd;
	
	// ������ ������ ũ��� �˴� �Ȱ���. 
	printf("char* ũ�� ; %u\n", sizeof(char*));
	printf("short* ũ�� ; %u\n", sizeof(short*));
	printf("long* ũ�� ; %u\n", sizeof(long*));
	printf("float* ũ�� ; %u\n", sizeof(float*));
	printf("int* ũ�� ; %u\n", sizeof(int*));

	// �������� Ÿ�Ը��� �۵��� �ٸ���

	//char num3 = 1;
	//short num2 = 1;
	//int num1 = 1;
	//
	//// �ּҺ���(������)�� ����Ǵ� �ּҰ��� �׳� �ּҰ�.
	//// �ּҸ� ã�� �� � ũ��� �о�� � �������� �ؼ��������� �����ͺ����� Ÿ�Կ� ���� ����

	//
	////double* pn1 = &num1; 
	//int* pn1 = &num1; 

	//
	//printf("%d\n", *pn1);

	// ������ ���� ����
	// �������� -> �ʿ�

	// ���ӵ� �ڷḦ �ٷ� �� �ִ�. -> �迭

	// �ٸ� �޸� ������ ������ �� �ִ�

	// �ڷᱸ���� ���� �� �ִ�.

	int a = 10;
	int b = 20;

	change(&a, &b);

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
}