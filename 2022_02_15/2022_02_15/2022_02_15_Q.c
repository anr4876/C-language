
// 문제 : 구조체를 도입해서 소스코드를 간단하게 바꿔주세요.
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <string.h>

struct Person {
	int age1;
	char* name1;
	char* home1;
	char* food1;
};


void introduce(struct Person p2) {
	printf("== 소개 시작 ==\n");
	printf("이름 : %s\n", p2.name1);
	printf("나이 : %d살\n", p2.age1);
	printf("고향 : %s\n", p2.home1);
	printf("== 소개 끝 ==\n");
}


void talk(struct Person p2) {
	printf("이야기 시작 : 안녕하세요. 저는 %d살, %s 입니다. 제 고향인 %s 에서는...\n", p2.age1, p2.name1, p2.home1);
}

// 함수, 구조체 정의 - 함수 밖에

int main() {

	struct Person p3 = { 20, "홍길동", "한양", "떡볶이"};
	struct Person p4 = { 45, "임꺽정", "평양", "떡국"};

	int age1 = 20;
	char* name1 = "홍길동";
	char* home1 = "한양";
	char* food1 = "떡볶이";

	int age2 = 45;
	char* name2 = "임꺽정";
	char* home2 = "평양";
	char* food2 = "떡국";

	

	introduce(p3);
	talk(p3);

	introduce(p4);
	talk(p4);
	
	// introduce(age1, name1, home1, food1);
	// talk(age1, name1, home1, food1);
	// 
	// introduce(age2, name2, home2, food2);
	// talk(age2, name2, home2, food2);

	return 0;
}