
// ���� : ����ü�� �����ؼ� �ҽ��ڵ带 �����ϰ� �ٲ��ּ���.
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <string.h>

struct Person {
	int age1;
	char* name1;
	char* home1;
	char* food1;
};


void introduce(struct Person p2) {
	printf("== �Ұ� ���� ==\n");
	printf("�̸� : %s\n", p2.name1);
	printf("���� : %d��\n", p2.age1);
	printf("���� : %s\n", p2.home1);
	printf("== �Ұ� �� ==\n");
}


void talk(struct Person p2) {
	printf("�̾߱� ���� : �ȳ��ϼ���. ���� %d��, %s �Դϴ�. �� ������ %s ������...\n", p2.age1, p2.name1, p2.home1);
}

// �Լ�, ����ü ���� - �Լ� �ۿ�

int main() {

	struct Person p3 = { 20, "ȫ�浿", "�Ѿ�", "������"};
	struct Person p4 = { 45, "�Ӳ���", "���", "����"};

	int age1 = 20;
	char* name1 = "ȫ�浿";
	char* home1 = "�Ѿ�";
	char* food1 = "������";

	int age2 = 45;
	char* name2 = "�Ӳ���";
	char* home2 = "���";
	char* food2 = "����";

	

	introduce(p3);
	talk(p3);

	introduce(p4);
	talk(p4);
	
	// introduce(age1, name1, home1, food1);
	// talk(age1, name1, home1, food1);
	// 
	// introduce(age2, name2, home2, food2);
	// talk(age2, name2, home2, food2);

	return 0;
}