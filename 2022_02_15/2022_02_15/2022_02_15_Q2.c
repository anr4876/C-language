#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

struct Person {
	int count;
	int* age = (int*)malloc(count * sizeof(int* ));
	char** name = (char**)malloc(count * sizeof(char*));
	char** home = (char**)malloc(count * sizeof(char*));
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
	scanf("%d", &count);
	struct Person people;
	people.count = count;
	people.
	



	return 0;
}