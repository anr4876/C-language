#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct _Person {
	int age;
	char name[20];
	char address[20];
	struct _Person* next;

} Person;

void print_addr(Person* head) {
	printf("== ��ü ȸ�� ����Ʈ ==\n");
	Person* target = NULL;

	target = head;

	for (int i = 0; ; i++) {

		printf("����, �̸�, �ּ� : %d, %s, %s\n", target->age, target->name, target->address);

		target = target->next;

		if (target == NULL) {
			break;
		}
	}
}

void link_person(Person* head, Person* person) {

	if (head != NULL) {

		Person* target = NULL;
		target = head;

		for (int i = 0; ; i++) {
			if (target->next == NULL) {
				break;
			}

			target = target->next;
		}

		target->next = person;
	}


}

int main(void) {

	// ���� ��ɰ� ���� ����� ����� �������ּ���.

	// ����
	/*
	�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. �ּҷ� ����, 4. ����) : 1
	���̸� �Է����ּ��� : 20[����]
	�̸��� �Է����ּ��� : ȫ�浿[����]
	�ּҸ� �Է����ּ��� : ����[����]
	�ּҷ��� �߰��Ǿ����ϴ�.
	�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. �ּҷ� ����, 4. ����) : 1
	���̸� �Է����ּ��� : 50[����]
	�̸��� �Է����ּ��� : �Ӳ���[����]
	�ּҸ� �Է����ּ��� : ���[����]
	�ּҷ��� �߰��Ǿ����ϴ�.
	�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. �ּҷ� ����, 4. ����) : 1
	���̸� �Է����ּ��� : 23[����]
	�̸��� �Է����ּ��� : Ȳ����[����]
	�ּҸ� �Է����ּ��� : ����[����]
	�ּҷ��� �߰��Ǿ����ϴ�.
	�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. �ּҷ� ����, 4. ����) : 2
	== ��ü ȸ�� ����Ʈ ==
	1��° ����� ����, �̸� : 20, ȫ�浿, ����
	2��° ����� ����, �̸� : 50, �Ӳ���, ���
	3��° ����� ����, �̸� : 23, Ȳ����, ����
	�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. �ּҷ� ����, 4. ����) : 3
	  == ��ü ȸ�� ����Ʈ ==
	  1��° ����� ����, �̸� : 20, ȫ�浿, ����
	  2��° ����� ����, �̸� : 50, �Ӳ���, ���
	  3��° ����� ����, �̸� : 23, Ȳ����, ����
	  ���° �ּҷ��� �����Ͻðڽ��ϱ�? 2
	  2��° �ּҷ��� �����Ǿ����ϴ�.
	  �޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. �ּҷ� ����, 4. ����) : 2
	  == ��ü ȸ�� ����Ʈ ==
	  1��° ����� ����, �̸� : 20, ȫ�浿, ����
	  2��° ����� ����, �̸� : 23, Ȳ����, ����
	  �޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. �ּҷ� ����, 4. ����) : 4
	  ���α׷��� ����˴ϴ�.
	*/
	int menu = 0;
	int count = 0;

	Person* first = NULL;

	while (1) {
		printf("�޴��� �������ּ��� (1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. �ּҷ� ����, 4. ����):");
		scanf("%d", &menu);

		if (menu == 1) {

			Person* current = (Person*)malloc(sizeof(Person));

			printf("���̸� �Է����ּ��� :");
			scanf("%d", &current->age);

			printf("�̸��� �Է����ּ��� :");
			scanf("%s", current->name);

			printf("�ּҸ� �Է����ּ��� :");
			scanf("%s", current->address);

			current->next = NULL;

			if (count == 0) { // current�� ù��° ����� ���
				first = current;
			}
			else {
				link_person(first, current);
			}

			printf("�ּҷ��� �߰��Ǿ����ϴ�.\n");
			count++;
		}
		else if (menu == 2) {
			print_addr(first);
		}
		else if (menu == 3) {
			/*print_addr(first);
			printf("���° �ּҷ��� �����Ͻðڽ��ϱ�? ");
			int target = -1;
			scanf("%d", &target);


			for (int i = target - 1; i < count - 1; i++) {
				people[i] = people[i + 1];
			}

			count--;

			printf("%d��° �ּҷ��� �����Ǿ����ϴ�.\n", target);*/
		}
		else if (menu == 4) {
			printf("���α׷��� ����˴ϴ�.\n");
			break;
		}
	}