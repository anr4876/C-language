#include <stdio.h>

void print_arr(int* arr2, int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
}

int main() {

	int arr[] = { 1,2,3,4 };
	print_arr(arr, 4);
	// 출력 : 1 2 3 4

	int arr2[] = { 1,2,3,4,5,6 };

	print_arr(arr2, 6);
	// 출력 : 1 2 3 4 5 6


	return 0;
}