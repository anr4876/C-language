#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#define NAME_SIZE 20
#include <stdio.h>
#include <stdlib.h>

struct Person {
	int age;
	char name[20];
	char address[20];
};

int main(void) {

	// ���� : ����� ���̿� �̸�, �ּҸ� �������ּ���.
	// ���� : ���� ������ ������ ����� �ϸ� �޸𸮸� ȿ�������� ������ּ���. ����ü�� ����Ͽ� �����͸� �����ϰ� �ٷ��ּ���.

	// ����¿���
	/*
	����� ���ڸ� �Է����ּ���. : 3[����]

	1��° ����� ���̸� �Է����ּ��� : 20[����]
	1��° ����� �̸��� �Է����ּ��� : ȫ�浿[����]
	1��° ����� �ּҸ� �Է����ּ��� : ����[����]
	2��° ����� ���̸� �Է����ּ��� : 50[����]
	2��° ����� �̸��� �Է����ּ��� : �Ӳ���[����]
	2��° ����� �ּҸ� �Է����ּ��� : ���[����]
	3��° ����� ���̸� �Է����ּ��� : 23[����]
	3��° ����� �̸��� �Է����ּ��� : Ȳ����[����]
	3��° ����� �ּҸ� �Է����ּ��� : ����[����]

	1��° ����� ����, �̸� : 20, ȫ�浿, ����
	2��° ����� ����, �̸� : 50, �Ӳ���, ���
	3��° ����� ����, �̸� : 23, Ȳ����, ����

	*/

	int count;
	printf("����� ���ڸ� �Է����ּ���. : ");
	scanf("%d",&count);
	while (count < 0) {
		if (count < 0) {
			printf("����� ���� ����Դϴ�.");
			scanf("%d", &count);
		}
	}

	struct Person* people = (struct Person*)malloc(count * sizeof(struct Person));

	for (int i = 0; i < count; i++) {
		printf("%d��° ����� ���̸� �Է��ϼ��� : ", i + 1);
		scanf("%d", &people[i].age);
		printf("%d��° ����� �̸��� �Է��ϼ��� : ", i + 1);
		scanf("%s", &people[i].name);
		printf("%d��° ����� �ּҸ� �Է��ϼ��� : ", i + 1);
		scanf("%s", &people[i].address);
	}
	
	for (int i = 0; i < count; i++) {
		printf("%d��° ����� �̸�, ����, �ּ� : %s, %d, %s \n", i + 1, people[i].name, people[i].age, people[i].address);
	}






	return 0;
}