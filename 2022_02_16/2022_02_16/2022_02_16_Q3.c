#include <stdio.h>

struct Person {
	int age;
	char* name;
};


int main(void) {

	struct Person p1;

	p1.name = "ȫ�浿";
	p1.age = 22;

	struct Person p2 = p1;

	// p2�� �����ϱ� ����(�ּ�)�ϱ�?
	// ����
	

	return 0;

}