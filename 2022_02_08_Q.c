#define _CRT_SECURE_NO_WARNINGS

// scanf�� �̿��� �ܾ� �ϳ��� word�� �������ּ���.
// �׸��� word�� love�̸� I love you. �� ����ϼ���

#include <stdio.h>

int main() {
	char word[200];
	
	scanf("%s", word );
	
	int flag = 0;
	for (int i = 0; i < 5; i++) {
		if (word[i] != "love"[i]){
			flag = 1;
		}
	}
	if (flag == 0) {
		printf("I love you");
	}
	return 0;
}

