#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// 1. 숫자 두개 받아서 출력하기
	int num1;
	int num2;
	printf("숫자를 두개 입력하시오 : ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("처음으로 입력한 숫자 %d, 두번째로 입력한 숫자 %d\n", num1, num2);

	// 2. 숫자 두개 받아서 더한 값 출력하기
		
	int num3;
	int num4;
	printf("숫자를 두개 입력하시오 : ");
	scanf("%d", &num3);
	scanf("%d", &num4);
	printf("%d + %d = %d\n", num3, num4, num3 + num4);
	
	// 3. 숫자 3개 받아서 출력하기

	int num5;
	int num6;
	int num7;
	printf("숫자를 세개 입력하시오 : ");
	scanf("%d", &num5);
	scanf("%d", &num6);
	scanf("%d", &num7);
	printf("처음으로 입력한 숫자 %d, 두번째로 입력한 숫자 %d, 마지막으로 입력한 숫자 %d\n", num5, num6, num7);

	// 4. 숫자 3개 받아서 모두 곱하고 결과 출력하기

	int num8;
	int num9;
	int num10;
	printf("숫자를 세개 입력하시오 : ");
	scanf("%d", &num8);
	scanf("%d", &num9);
	scanf("%d", &num10);
	printf("%d X %d X %d = %d\n", num8, num9, num10, num8 * num9 * num10);
	
	// 5. 실수 1개를 입력받아 출력하기

	float num_f;

	printf("실수를 1개 입력하시오 : ");
	scanf("%f", &num_f);
	printf("입력하신 실수는 %f입니다.\n", num_f);

	return 0;
}