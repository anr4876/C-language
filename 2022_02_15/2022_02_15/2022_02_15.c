#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 
struct Person {
	int age;
	char name[20];
	char address[20];
};

void introduce(int age, char* address, char* name) {
	printf("안녕하세요 %d살 %s사는 %s입니다.\n", age,address, name);
}
	
void introduce2(struct Person p2) {
	printf("안녕하세요 %d살 %s사는 %s입니다.\n", p2.age , p2.address, p2.name);
}

int main(void) {

	int age = 30;
	char name[20] = "이순신";
	char address[20] = "서울";


	introduce(age, address, name);

	struct Person p1; // 구조체

	p1.age = 20;
	// 문자열 카피 함수 -> strcpy(목적지 주소, 복사 대상 주소);
	// 문자 복사 -> api
	strcpy(p1.name, "홍길동");
	strcpy(p1.address, "대전");

	introduce(p1.age, p1.address, p1.name);

	introduce2(p1);

	return;
}