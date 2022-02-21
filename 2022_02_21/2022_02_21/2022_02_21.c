#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct _Person {
	int age;
	char* name;
	char* address;
	struct Person* next;
} Person;

void link_person(Person* head, Person* person) {

	Person* target = NULL;

	target = head; // ��ũ�帮��Ʈ�� ù��° ���(���)

	for (int i = 0; ; i++) {
		if (target->next == NULL) {
			break;
		}

		target = target->next;
	}

	target->next = person;

}

void print_addr(Person* head) {

	Person* target = NULL;

	target = head;

	printf("== ��ü ȸ�� ����Ʈ ==\n");
	for (int i = 0; ; i++) {
		printf("%d��° ����� ����, �̸�, �ּ� : %d, %s, %s\n", i + 1, target->age, target->name, target->address);
		target = target->next;

		if (target == NULL) {
			break;
		}
	}
}

int main(void) {

	// ȸ�� �߰��� ��ȸ ����� �޴�ȭ ��Ų �� �ݺ������� ������ �� �ְ� ������ּ���.

	  // ����
	  /*
	  �޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ) : 1
	  ���̸� �Է����ּ��� : 20[����]
	  �̸��� �Է����ּ��� : ȫ�浿[����]
	  �ּҸ� �Է����ּ��� : ����[����]
	  �ּҷ��� �߰��Ǿ����ϴ�.
	  �޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ) : 1
	  ���̸� �Է����ּ��� : 50[����]
	  �̸��� �Է����ּ��� : �Ӳ���[����]
	  �ּҸ� �Է����ּ��� : ���[����]
	  �ּҷ��� �߰��Ǿ����ϴ�.
	  �޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ) : 1
	  ���̸� �Է����ּ��� : 23[����]
	  �̸��� �Է����ּ��� : Ȳ����[����]
	  �ּҸ� �Է����ּ��� : ����[����]
	  �ּҷ��� �߰��Ǿ����ϴ�.
	  �޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ) : 2
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

	Person* p1 = (Person*)malloc(sizeof(Person));
	Person* p2 = (Person*)malloc(sizeof(Person));

	int menu = 0;
	int count = 0;
	Person* target = NULL;
	while (1) {
		printf("�޴��� �������ּ��� (1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ, 3. �ּҷ� ����, 4. ����):");
		scanf("%d", &menu);
		target = p1;
		if (menu == 1) {
			link_person(p1, target);
			printf("���̸� �Է����ּ��� :");
			scanf("%d", target->age);

			printf("�̸��� �Է����ּ��� :");
			scanf("%s", target->name);

			printf("�ּҸ� �Է����ּ��� :");
			scanf("%s", target->address);

			if (count >= 2) {
				link_person(p1, target);
			}
			printf("�ּҷ��� �߰��Ǿ����ϴ�.\n");
			count++;
			target = target->next;
		}
		else if (menu == 2) {
			print_addr(p1);
		}
		
	}



	return 0;
}