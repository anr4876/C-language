﻿

#include <stdio.h>
#include <stdlib.h> 


int* makeArr() {

	int* arr = malloc(12);

	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;

	return arr;
}

int main(void) {

	int* arr = makeArr();
	printf("arr[0] : %d\n", arr[0]); // 출력 : 100
	printf("arr[1] : %d\n", arr[1]); // 출력 : 200
	printf("arr[2] : %d\n", arr[2]); // 출력 : 300

	return 0;
}