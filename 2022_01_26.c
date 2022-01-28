#include <stdio.h>

void change(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) {


	//char c; // 1
	//char* pc;

	//short s;// 2
	//short* ps;

	//int i;// 4
	//int* pi;

	//long l;// 4
	//long* pl;

	//float f;// 4
	//float* pf;

	//double d;// 8
	//double* pd;
	
	// 포인터 유형의 크기는 죄다 똑같다. 
	printf("char* 크기 ; %u\n", sizeof(char*));
	printf("short* 크기 ; %u\n", sizeof(short*));
	printf("long* 크기 ; %u\n", sizeof(long*));
	printf("float* 크기 ; %u\n", sizeof(float*));
	printf("int* 크기 ; %u\n", sizeof(int*));

	// 포인터의 타입마다 작동이 다르다

	//char num3 = 1;
	//short num2 = 1;
	//int num1 = 1;
	//
	//// 주소변수(포인터)에 저장되는 주소값은 그냥 주소값.
	//// 주소를 찾은 후 어떤 크기로 읽어와 어떤 윻ㅇ으로 해석해할지는 포인터변수의 타입에 의해 결정

	//
	////double* pn1 = &num1; 
	//int* pn1 = &num1; 

	//
	//printf("%d\n", *pn1);

	// 포인터 쓰는 이유
	// 지역변수 -> 초월

	// 연속된 자료를 다룰 수 있다. -> 배열

	// 다른 메모리 공간을 참조할 수 있다

	// 자료구조를 만들 수 있다.

	int a = 10;
	int b = 20;

	change(&a, &b);

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
}