#include <stdio.h>

struct Person {
	int age;
	char* name;
};


int main(void) {

	struct Person p1;

	p1.name = "홍길동";
	p1.age = 22;

	struct Person p2 = p1;

	// p2는 원본일까 참조(주소)일까?
	// 원본
	

	return 0;

}