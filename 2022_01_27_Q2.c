// 문제 : char 변수 b를 이용하지 않고 b의 값을 훼손
// 조건 : 포인터 변수를 사용해서 값을 변경해야 한다.
// 조건 : 수정가능 지역에서 b 라는 변수를 언급하면(사용하면) 안됩니다.

#include <stdio.h>

int main(void) {

	int a = 1;
	int b = 5;

	printf("== 변수의 주소 ==\n");
	printf("&a : %ld\n", (long)&a);
	printf("&b : %ld\n", (long)&b);

	// 수정가능지역 시작
	int c;
	int d;
	int num = &d - &c;	// 변수 끼리의 차이를 구하는 코드
	
	int* pa = &a;
	int* pb = pa + num;		// a의 주소에 b의 주소 차이만큼 더해준 값
	

	*pa = 2;
	*pb = 10;
	
	//printf("pb : %ld\n", (long)pb);
	// 수정가능지역 끝

	printf("== 변수의 값 ==\n");
	printf("a : %d\n", a);
	// 출력 => a : 2
	printf("b : %d\n", b);
	// 출력 => b : 10

	return 0;
}