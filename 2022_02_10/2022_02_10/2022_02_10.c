#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 10;
	int* pa = &a;

	int** ppa = &pa; // ����������
	int*** pppa = &ppa; // ����������

	// ���������� -> 2���� ���
	// ���������� -> 3���� ���

	int arr1[] = { 1, 2, 3 }; // arr1 -> int �� �ּ� (int*)
	int arr2[] = { 4, 5, 6 }; // arr2 -> int �� �ּ� (int*)
	int arr3[] = { 7, 8, 9 }; // arr3 -> int �� �ּ� (int*)

	int* darr[] = { arr1, arr2, arr3 };  // darr -> int�� ���� �ּ� (int**)
	char* darr2[] = { arr1, arr2, arr3 };  // darr -> int�� ���� �ּ� (int**)
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d , %d  ", darr[i][j], *(*(darr2 + (i)) + (j * 4)));
		}
		printf("\n");
	}


	return 0;
}