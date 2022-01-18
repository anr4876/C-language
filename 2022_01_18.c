# define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {

	int num1;
	int num2;


	// 사용자마다 기능을 사용하는횟수가 다르기 때문에 정할 수 없다.
	// 다썻으면 종료하시오.

	// 반복문 => 특정 코드를 반복
	// 반복문 제어
	// break -> 반복문을 그 즉시 종료.
	// continue -> 그 즉시 다음 회차로 넘어감.
	/*while(1)
	{
		printf("두개의 숫자를 공백으로 구분해서 입력해주세요 :");
		scanf("%d %d", &num1, &num2);
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
	}*/
	// main 영역의 변수
	int count = 0;
	while (1)
	{
		if (count == 10) {
			break;
		}
		count ++;
		printf("반복횟수 : %d\n", count);
		
	
	}
	count = 0;

	while (count < 10)
	{
		count++;
		printf("반복횟수 : %d\n", count);


	}
	// (시작;끝; 증가량)
	// for문 영역 안에서의 변수 
	for (int count = 0; count < 10; count++) {
		printf("반복횟수 : %d\n", count);
	}

	// 반복문 -> while, for
	// while -> 범위가 없는 경우
	// for -> 범위가 있는 경우. 수열을 다루는 경우
	// 반복문을 제어하는 법은 -> 반복횟수를 세서 반복 조건을 만족시키거나,
	// break 키워드를 사용해 원할 때 빠져 나간다.
	
	//==============================================================================================
	// 문제 (수열)
	//==============================================================================================

	// 1. 1 ~ 100까지 출력
	for (int count = 1; count < 101; count++) {
		printf("%d\n", count);
	}
	printf("\n");
	// 2. -25 ~ 50까지 출력
	for (int count = -25; count <= 50; count++) {
		printf("%d\n", count);
	}
	printf("\n");
	// 3. 1 ~ 100 까지 짝수만 출력

	for (int count =2; count <= 100; count += 2) {
		printf("%d\n", count);
	}
	printf("\n");
	// 4. 100 ~ 200 사이의 홀수만 출력
	for (int count = 100; count <= 200; count += 1) {
		if (count % 2 == 1) {
			printf("%d\n", count);

		}
	}
	printf("\n");
	// 5. 1 ~ 500 사이의 수 중 4의 배수만 출력
	for (int count = 1; count <= 500; count++ ) {
		if (count % 4 == 0) {
			printf("%d\n", count);

		}
	}
	printf("\n");

	// 6. 1 ~ 1000 사이의 수 중 1000의 약수만 출력 -> 1000 % a == 0
	// 약수 -> 1000을 a로 나누었을 때 나누어 떨어지면 a를 1000의 약수라고 한다.
	// 약수는 1 ~ 자기자신만 대상 수로 한다.
	// 나누어 떨어진다는 것은 나누었을 때 나머지가 0이라는 것을 의미한다.

	
	for (int count = 1; count <= 1000; count++) {
		if (1000 % count == 0) {
			printf("%d\n", count);
		}
	}
	printf("\n");



	// 7. 1 ~ 1000 사이의 수 중 3의 배수 이면서 5의 배수인 수만 출력


	for (int count = 1; count <= 1000; count++) {
		if (count % 3 == 0) {
			if (count % 5 == 0) {
				printf("%d\n", count);
			}
		}
	}
	printf("\n");


	//==============================================================================================
	// 문제 (약수와 소수 구하기)
	//==============================================================================================

	 // 1. 1 ~ 10까지의 합을 구해주세요. (답 : 55)
	int num = 0;
	for (int count = 1; count < 11; count++) {
		num += count;
	}
	printf("%d\n", num);
	printf("\n");
  
	// 2. 10의 약수의 개수를 구해주세요. (답 : 4)
	
	num = 0;
	
	for (int count = 1; count < 11; count++) {
		if (10 % count == 0) {
			num++;
		}

	}
	printf("%d\n", num);
	printf("\n");


	// 3. 10의 약수의 합을 구해주세요. (답 : 18)
	
	num = 0;
	
	for (int count = 1; count < 11; count++) {
		if (10 % count == 0) {
			num += count;
		}
	}
	printf("%d\n", num);
	printf("\n");



  // 4. 7이 소수인지 판별하고 소수라면 '소수'를 출력, 아니라면 '비소수'를 출력해주세요. (답 : 소수)
  // 소수는 1과 자기 자신만을 약수로 갖는 수를 말합니다.
	
	for (int count = 1; count <= 7; count++) {
		if (7 % count == 0 && count != 7 && count != 1) {
			printf("비소수");
			break;
			

		}
		if (count = 7) {
			printf("소수");
		}


		

	}
	














	return 0;
}
