#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 
struct Person {
	int age;
	char name[20];
	char address[20];
};

void introduce(int age, char* address, char* name) {
	printf("�ȳ��ϼ��� %d�� %s��� %s�Դϴ�.\n", age,address, name);
}
	
void introduce2(struct Person p2) {
	printf("�ȳ��ϼ��� %d�� %s��� %s�Դϴ�.\n", p2.age , p2.address, p2.name);
}

int main(void) {

	int age = 30;
	char name[20] = "�̼���";
	char address[20] = "����";


	introduce(age, address, name);

	struct Person p1; // ����ü

	p1.age = 20;
	// ���ڿ� ī�� �Լ� -> strcpy(������ �ּ�, ���� ��� �ּ�);
	// ���� ���� -> api
	strcpy(p1.name, "ȫ�浿");
	strcpy(p1.address, "����");

	introduce(p1.age, p1.address, p1.name);

	introduce2(p1);

	return;
}