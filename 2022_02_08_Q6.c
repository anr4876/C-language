
// ���� : ���忡�� Ư�� ������ ��ġ�� �����ϴ� �Լ��� ������ּ���.(get_index_of_str)
// Ư�� ������ ���ԵǾ� ���� ������ -1�� �����մϴ�.
// my_strncmp�� �̿��� �� �ֽ��ϴ�.

#include <stdio.h>

int my_strcmp(char* str1, char* str2) {
	int num = 1;
	for (int i = 0; i < str2[i]; i++) {
		if (*(str1 + i) != *(str2 + i))
			num = 0;
	}

	return num;
}


int get_index_of_str(char* str1,char* str2) {
	int num = -1;
	
	for (int i = 0; str1[i]; i++) {
		 if (*(str1 + i) == *(str2)) {
			
			 
			 if (my_strcmp(str1 + i,str2)== 1) {
				num = i;

			 }
			break;
				
			
		}
		
		
	}
	return num;
}
int main(void) {
	int index;

	index = get_index_of_str("abc", "b");
	printf("index : %d\n", index);
	// ��� => index : 1

	index = get_index_of_str("test", "es");
	printf("index : %d\n", index);
	// ��� => index : 1

	index = get_index_of_str("hello world", "wor");
	printf("index : %d\n", index);
	// ��� => index : 6

	index = get_index_of_str("abcd", "bd");
	printf("index : %d\n", index);
	// ��� => index : -1

	return 0;
}