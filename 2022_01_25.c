#include <stdio.h>
int a = 10;

// �������
void test3() {
	printf("3\n");// 6
	a = 7; // 7
}

void test2() {
	printf("2\n");// 4
	test3(); // 5
	a = 5; // 8
}

void test1() {
	printf("1\n"); // 2
	test2(); // 3
	a = 3; //9
	
}



int main() {

	test1(); // 1

	// ���ø޸�
	// ����-> ���� ���߿� ���� �ڷḦ ���� ���� ó���ϴ� ����
	printf("%d\n", a);


	// ��𿡴� �����س���?? -> ��ġ(������) �˷���
	char b;
	&a; // �ּҿ����� &�� ���� �տ�
	b = 10;
	// �ּ����
	printf("%p\n", &b);
	printf("%d\n",(int)&b); // ������ ����ȯ

	// ���� ��������.

	printf("%d\n", b); // �̸����� ��������
	printf("%d\n", *(&b)); // �ּҷ� ��������(������) ==> �ּҰ� �տ� *(&����) or *&����
	

	// �ּҰ� ���� -> �ּ� ����
	char* pb = &b;

	int c = 100000000;
	int* pc = &c;
	printf("%d\n", *pb);
	printf("%d\n", *pc);






	return 0;
}