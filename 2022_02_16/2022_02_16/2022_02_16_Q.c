#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#define NAME_SIZE 20
#include <stdio.h>
#include <stdlib.h>

struct Person {
	int age;
	char name[20];
	char address[20];
};

int main(void) {

	// 문제 : 사람의 나이와 이름, 주소를 저장해주세요.
	// 조건 : 저장 개수에 제한이 없어야 하며 메모리를 효율적으로 사용해주세요. 구조체를 사용하여 데이터를 간단하게 다뤄주세요.

	// 입출력예시
	/*
	사람의 숫자를 입력해주세요. : 3[엔터]

	1번째 사람의 나이를 입력해주세요 : 20[엔터]
	1번째 사람의 이름을 입력해주세요 : 홍길동[엔터]
	1번째 사람의 주소를 입력해주세요 : 대전[엔터]
	2번째 사람의 나이를 입력해주세요 : 50[엔터]
	2번째 사람의 이름을 입력해주세요 : 임꺽정[엔터]
	2번째 사람의 주소를 입력해주세요 : 경기[엔터]
	3번째 사람의 나이를 입력해주세요 : 23[엔터]
	3번째 사람의 이름을 입력해주세요 : 황진이[엔터]
	3번째 사람의 주소를 입력해주세요 : 서울[엔터]

	1번째 사람의 나이, 이름 : 20, 홍길동, 대전
	2번째 사람의 나이, 이름 : 50, 임꺽정, 경기
	3번째 사람의 나이, 이름 : 23, 황진이, 서울

	*/

	int count;
	printf("사람의 숫자를 입력해주세요. : ");
	scanf("%d",&count);
	while (count < 0) {
		if (count < 0) {
			printf("사람의 수는 양수입니다.");
			scanf("%d", &count);
		}
	}

	struct Person* people = (struct Person*)malloc(count * sizeof(struct Person));

	for (int i = 0; i < count; i++) {
		printf("%d번째 사람의 나이를 입력하세요 : ", i + 1);
		scanf("%d", &people[i].age);
		printf("%d번째 사람의 이름을 입력하세요 : ", i + 1);
		scanf("%s", &people[i].name);
		printf("%d번째 사람의 주소를 입력하세요 : ", i + 1);
		scanf("%s", &people[i].address);
	}
	
	for (int i = 0; i < count; i++) {
		printf("%d번째 사람의 이름, 나이, 주소 : %s, %d, %s \n", i + 1, people[i].name, people[i].age, people[i].address);
	}






	return 0;
}