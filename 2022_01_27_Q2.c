// ���� : char ���� b�� �̿����� �ʰ� b�� ���� �Ѽ�
// ���� : ������ ������ ����ؼ� ���� �����ؾ� �Ѵ�.
// ���� : �������� �������� b ��� ������ ����ϸ�(����ϸ�) �ȵ˴ϴ�.

#include <stdio.h>

int main(void) {

	int a = 1;
	int b = 5;

	printf("== ������ �ּ� ==\n");
	printf("&a : %ld\n", (long)&a);
	printf("&b : %ld\n", (long)&b);

	// ������������ ����
	int c;
	int d;
	int num = &d - &c;	// ���� ������ ���̸� ���ϴ� �ڵ�
	
	int* pa = &a;
	int* pb = pa + num;		// a�� �ּҿ� b�� �ּ� ���̸�ŭ ������ ��
	

	*pa = 2;
	*pb = 10;
	
	//printf("pb : %ld\n", (long)pb);
	// ������������ ��

	printf("== ������ �� ==\n");
	printf("a : %d\n", a);
	// ��� => a : 2
	printf("b : %d\n", b);
	// ��� => b : 10

	return 0;
}