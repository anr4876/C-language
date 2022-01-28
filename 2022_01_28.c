#include <stdio.h>

int main(void) {

	char a = 10;
	char b = 20;

	printf("%d\n", (int)&a);
	printf("%d\n", (int)&b);

	// 어떤 변수에서 주소를 추출하면 -> 해당 변수 타입의 포인터 타입으로 취급

	char* pa = &a;


	printf("%d\n", (int)pa);

	pa = pa + 32;  // a의 주소를 a와 b의 차이만큼 가감해주었을떄 -> b의 주소

	printf("%d\n", (int)pa);
	
	// 자료형의 크기가 다를때

	long long int c = 10;
	long long int d = 20;

	printf("%d\n", (int)&c);
	printf("%d\n", (int)&d);

	long long int* pc = &c; // c의 주소르 pc 에 저장

	printf("%d\n", (int)pc); // c의 주소를 출력

	pc = pc + 4; // 8바이트인 long long int는 8바이트씩 움직인다. 따라서 32바이트의 거리가 있다면 4번 움직여야 한다.

	printf("%d\n", (int)pc); // d의 주소를 출력하는 코드


	// 변수를 일열로 붙여서 만들어주는 코드 -> 배열

	// 자료형, 길이, 시작 주소
	int arr[5]; // 배열구조

	// arr -> 배열이름. 값 == 시작 주소값(배열 선언시 사용한 타입으로 취급)
								  
	for (int i =  0; i < 5; i++) {

		printf("arr + %d : %d\n", i, (int)(arr + i));   // arr을  1칸 즉 4바이트 움직여서 옆의 칸의 주소를 입력해준다.
		*(arr + i) = 10 + (i*10);						// arr의 주소 안에서 칸(4바이트)마다 값을 넣어준다
	
		printf("%d\n", *(arr + i));						// arr의 값을 출력하는 2가지 방법
		printf("%d\n", *(i + arr));
		printf("%d\n", arr[i]);							// 배열의 크기는 칸(자료형의 크기)이다. 배열의 n번째 값은 
														// n * (자료형의 크기 즉 바이트) 에 위치한다
	}



	
	return 0;
}