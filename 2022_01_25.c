#include <stdio.h>
int a = 10;

// 실행순서
void test3() {
	printf("3\n");// 6
	a = 7; // 7
}

void test2() {
	printf("2\n");// 4
	test3(); // 5
	a = 5; // 8
}

void test1() {
	printf("1\n"); // 2
	test2(); // 3
	a = 3; //9
	
}



int main() {

	test1(); // 1

	// 스택메모리
	// 스택-> 가장 나중에 들어온 자료를 가장 먼저 처리하는 구조
	printf("%d\n", a);


	// 어디에다 저장해놨니?? -> 위치(포인터) 알려줘
	char b;
	&a; // 주소연산자 &를 변수 앞에
	b = 10;
	// 주소출력
	printf("%p\n", &b);
	printf("%d\n",(int)&b); // 십진수 형변환

	// 값을 가져오기.

	printf("%d\n", b); // 이름으로 가져오기
	printf("%d\n", *(&b)); // 주소로 가져오기(역참조) ==> 주소값 앞에 *(&변수) or *&변수
	

	// 주소값 저장 -> 주소 변수
	char* pb = &b;

	int c = 100000000;
	int* pc = &c;
	printf("%d\n", *pb);
	printf("%d\n", *pc);






	return 0;
}