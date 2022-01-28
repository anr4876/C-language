#include "stdio.h"

int main(void) {

	// =========================================================================================================================
	// 1
	// =========================================================================================================================
	
	// int i = 3.14; // 실패 => i 에는 오직 정수만 들어간다.
	// printf("1st 시도 => i : %d\n", i); // 


	float f = 3.14;

	//printf("2nd 시도 => f : %d\n", f); // 실패 => %d`는 데이터를 `int 로 해석하겠다.`라는 뜻 입니다.

	// 여기서 구현
	printf("2nd 시도 => f : %f\n", f); // 실패 => %d`는 데이터를 `int 로 해석하겠다.`라는 뜻 입니다.

	// =========================================================================================================================
	// 2
	// =========================================================================================================================

	// 문제 : 변수를 만들고 200을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)
	short num_s = 200;

	printf("%d\n", num_s);

	// =========================================================================================================================
	// 3
	// =========================================================================================================================

	// 문제 : 변수를 만들고 21억을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)
	int num_i = 2100000000;
	printf("%d\n", num_i);

	// =========================================================================================================================
	// 4
	// =========================================================================================================================

	// 문제 : 변수를 만들고 22억을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)

	unsigned int num_ui1 = 2200000000;
	printf("%u\n", num_ui1);

	// =========================================================================================================================
	// 5
	// =========================================================================================================================

	// 변수를 만들고 400억을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)

	long long int num_ui2 = 40000000000;
	printf("%lld\n", num_ui2);

	// =========================================================================================================================
	// 6
	// =========================================================================================================================
	
	// 올바른 값을 출력해주세요.
	double num_a = 10;
	double num_b = 4;
	double result = num_a/num_b;
	// double result = (double)10 / 4;
	

	printf("%lf\n", result);
	// 출력 : 2.500000

	// =========================================================================================================================
	// 7
	// =========================================================================================================================

	// 정수 : int, 실수(소수) : float

	int a = 100;
	double b = 3.140000;

	printf("%d\n", a); // 출력 : 100
	printf("%f\n", b); // 출력 : 3.140000

	a = 200;
	b = 10.500000;

	printf("%d\n", a); // 출력 : 200
	printf("%f\n", b); // 출력 : 10.500000

	// =========================================================================================================================
	// 7
	// =========================================================================================================================

	int number_a = 20;
	int number_b = 40;

	// 수정가능지역 시작

	int num_c;

	num_c = number_a;
	number_a = number_b;
	number_b = num_c;

	// 수정가능지역 끝
	printf("number_a : %d\n", number_a);
	// 출력 => a : 40
	printf("number_b : %d\n", number_b);
	// 출력 => b : 20



	return 0;
}