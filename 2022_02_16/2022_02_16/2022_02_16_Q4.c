

// ���� : ����ü ������ �ּҸ� �̿��ؼ� �������� �����ϴ� �Լ��� �������ּ���.
// ���� : �Ʒ��� ���� ����ϰ� ���ּ���.
#include <stdio.h>

 //��������� ������ ���꺸�� �켱�Ѵ�.

 struct School {
	char* name;
	int birth_date;
};

void change(struct School* s2) {
	s2 -> name = "�̱��ʵ��б�";
	s2 -> birth_date = 20180717;
}

int main(void) {

	struct School s1;
	s1.name = "�ѱ��ʵ��б�";
	s1.birth_date = 19860404;

	printf("�б��� �̸� : %s\n", s1.name);
	// ��� => �б��� �̸� : �ѱ��ʵ��б�
	printf("�б��� ������ : %d\n", s1.birth_date);
	// ��� => �б��� ������ : 19860404

	change(&s1);

	printf("�б��� �̸� : %s\n", s1.name);
	// ��� => �б��� �̸� : �̱��ʵ��б�
	printf("�б��� ������ : %d\n", s1.birth_date);
	// ��� => �б��� ������ : 20180717

	return 0;
}