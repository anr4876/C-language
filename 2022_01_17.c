#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	

	// 콘솔 입력 ->

	// 입력값을 저장할 변수
	int data;
	float data2;
	//printf("%d", data); // 서식문자 필요
	scanf("%d", &data); // 입력을 받을 때도 서식 문자 필요 
	scanf("%f", &data2); 

	printf("%d\n", data);
	printf("%f\n", data2);


	int year;
	int month;
	int day;
	/*
	scanf("%d", &year);
	scanf("%d", &month);
	scanf("%d", &day);
	*/
	
	printf("당신의 생일을 입력해주세요 (예시-> 1990-12-12) :");
	scanf("%d-%d-%d", &year, &month, &day) ; // %d와 %d 사이에 있는 문자나 공백이 입력을 완료하는 문자이다.

	printf("%d년 %d월 %d일입니다.", year, month, day);
	// 입력을 완료하는 기준은 공백과 줄바꿈이다.


	// 산술 연산자
	// 더하기 : +
	// 빼기 : -
	// 곱하기 : *
	// 나누기 : /
	// 나머지 : %



	return 0;
}
	