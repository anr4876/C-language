
// ���� : ����� ���̸� �������ּ���.
// ���� : ���ο� �迭�� ���� ����� �� �����ϴ�. 

// ����¿���
/*
����� ���ڸ� �Է����ּ���. : 7[7[����]
3 ���Ϸ� �Է����ּ���.
����� ���ڸ� �Է����ּ���. : 4[����]
3 ���Ϸ� �Է����ּ���.
����� ���ڸ� �Է����ּ���. : 100[����]
3 ���Ϸ� �Է����ּ���.
����� ���ڸ� �Է����ּ���. : 2[����]

1��° ����� ���̸� �Է����ּ��� : 33[����]
2��° ����� ���̸� �Է����ּ��� : 50[����]
1��° ����� ���� : 33
2��° ����� ���� : 50
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int people[3];
	
	int a;
	printf("����� ���ڸ� �Է����ּ��� : ");
	scanf("%d", &a);
	while (a <= 0 || a > 3) {
		if (a <= 0 || a > 3) {
			printf("1�̻� 3 ���Ϸ� �Է����ּ���");
			scanf("%d", &a);
		}
	}
		
	for (int i = 0; i < a; i++) {
		printf("%d��° ����� ���̸� �Է����ּ��� : ",i + 1);
		scanf("%d", people[i]);
	}

	for (int i = 0; i < a; i++) {
		printf("%d��° ����� ���� : %d\n",i+1,*(people + i));
		
	}
	return 0;
}