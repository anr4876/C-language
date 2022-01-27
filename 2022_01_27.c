#include <stdio.h>

int main(void) {



	char a = 10;
	char b = 20;
	char c = 30;
	int d = 40;
	int e = 50;

	printf("a의 주소 : %d\n", (int)&a);	 // a의 포인터 주소를 10진수로 출력
	printf("b의 주소 : %d\n", (int)&b);	 // b의 포인터 주소를 10진수로 출력
	// 주소의 차이가 계속 일정하다
	// 함수 안에서 변수의 차이는 모두 일정하다
	// 포인터(주소) 연산의 가감은 연산 대상이 되는 주소의 자료형 크가 기준이다.
	// 원래 거리에서 자료형의 크기만큼 나누어준 만큼 차이가 있다.
	// 예를 들어 int형은 4바이트임으로 32를 4로 나누어준 만큼의 거리가있다

	// b의 주소를 몰라도 b에 접근하는 방법
	// a와 b의 주소 차이만큼 증감 한다.
	char* pa = &a;
	char* pb = pa + 32;		// a주소에 b와 a의 주소 차이만큼 더해주는 코드

	printf("a주소로 찾은 b의 주소 : %d\n", (int)pb);	// a주소를 이용해 b의 주소를 출력하는 코드
	printf("b = %d\n", *pb);	// a로 만든 주소로 b의 값이 출력되는지 확인하는 코드

	char* pc = pb + 32;
	printf("주소의 차이로 구한 c의 주소 : %d\n", (int)pc);	// 주소 차이가 일정함을 이용해 구한 c의 주소 출력
	printf("c = %d\n", *pc);	// c의 주소가 올바른지 알아내는 코드

	int* pd = pc + 32; // 연산 대상이 되는 주소의 자료형의 크기는 pc가 char의 자료형을 사용함으로 거리는 32나누기 char형의 크기이다
	printf("주소의 차이로 구한 d의 주소 : %d\n", (int)pd);	
	printf("d = %d\n", *pd);	

	int* pe = pd + 8;	// 연산 대상이 int 형임으로 32 나누기 int형의 크기이다 따라서 32 / 4 임으로 8을 가감해줘야 한다.
	printf("주소의 차이로 구한 d의 주소 : %d\n", (int)pe);	
	printf("e = %d\n", *pe);
	
	




	return 0;
}