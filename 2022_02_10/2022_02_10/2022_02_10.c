#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 10;
	int* pa = &a;

	int** ppa = &pa; // 이중포인터
	int*** pppa = &ppa; // 삼중포인터

	// 이중포인터 -> 2차원 행렬
	// 삼중포인터 -> 3차원 행렬

	int arr1[] = { 1, 2, 3 }; // arr1 -> int 형 주소 (int*)
	int arr2[] = { 4, 5, 6 }; // arr2 -> int 형 주소 (int*)
	int arr3[] = { 7, 8, 9 }; // arr3 -> int 형 주소 (int*)

	int* darr[] = { arr1, arr2, arr3 };  // darr -> int형 이중 주소 (int**)
	char* darr2[] = { arr1, arr2, arr3 };  // darr -> int형 이중 주소 (int**)
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d , %d  ", darr[i][j], *(*(darr2 + (i)) + (j * 4)));
		}
		printf("\n");
	}


	return 0;
}