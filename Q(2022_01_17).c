#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// 1. ���� �ΰ� �޾Ƽ� ����ϱ�
	int num1;
	int num2;
	printf("���ڸ� �ΰ� �Է��Ͻÿ� : ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("ó������ �Է��� ���� %d, �ι�°�� �Է��� ���� %d\n", num1, num2);

	// 2. ���� �ΰ� �޾Ƽ� ���� �� ����ϱ�
		
	int num3;
	int num4;
	printf("���ڸ� �ΰ� �Է��Ͻÿ� : ");
	scanf("%d", &num3);
	scanf("%d", &num4);
	printf("%d + %d = %d\n", num3, num4, num3 + num4);
	
	// 3. ���� 3�� �޾Ƽ� ����ϱ�

	int num5;
	int num6;
	int num7;
	printf("���ڸ� ���� �Է��Ͻÿ� : ");
	scanf("%d", &num5);
	scanf("%d", &num6);
	scanf("%d", &num7);
	printf("ó������ �Է��� ���� %d, �ι�°�� �Է��� ���� %d, ���������� �Է��� ���� %d\n", num5, num6, num7);

	// 4. ���� 3�� �޾Ƽ� ��� ���ϰ� ��� ����ϱ�

	int num8;
	int num9;
	int num10;
	printf("���ڸ� ���� �Է��Ͻÿ� : ");
	scanf("%d", &num8);
	scanf("%d", &num9);
	scanf("%d", &num10);
	printf("%d X %d X %d = %d\n", num8, num9, num10, num8 * num9 * num10);
	
	// 5. �Ǽ� 1���� �Է¹޾� ����ϱ�

	float num_f;

	printf("�Ǽ��� 1�� �Է��Ͻÿ� : ");
	scanf("%f", &num_f);
	printf("�Է��Ͻ� �Ǽ��� %f�Դϴ�.\n", num_f);

	return 0;
}