#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct _Person {
	int age;
	char* name;
	char* address;
	struct Person* next;
} Person;

void link_person(Person* head, Person* person) {

	Person* target = NULL;

	target = head; // 링크드리스트의 첫번째 사람(노드)

	for (int i = 0; ; i++) {
		if (target->next == NULL) {
			break;
		}

		target = target->next;
	}

	target->next = person;

}

void print_addr(Person* head) {

	Person* target = NULL;

	target = head;

	printf("== 전체 회원 리스트 ==\n");
	for (int i = 0; ; i++) {
		printf("%d번째 사람의 나이, 이름, 주소 : %d, %s, %s\n", i + 1, target->age, target->name, target->address);
		target = target->next;

		if (target == NULL) {
			break;
		}
	}
}

int main(void) {

	// 회원 추가와 조회 기능을 메뉴화 시킨 후 반복적으로 수행할 수 있게 만들어주세요.

	  // 예시
	  /*
	  메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회) : 1
	  나이를 입력해주세요 : 20[엔터]
	  이름을 입력해주세요 : 홍길동[엔터]
	  주소를 입력해주세요 : 대전[엔터]
	  주소록이 추가되었습니다.
	  메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회) : 1
	  나이를 입력해주세요 : 50[엔터]
	  이름을 입력해주세요 : 임꺽정[엔터]
	  주소를 입력해주세요 : 경기[엔터]
	  주소록이 추가되었습니다.
	  메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회) : 1
	  나이를 입력해주세요 : 23[엔터]
	  이름을 입력해주세요 : 황진이[엔터]
	  주소를 입력해주세요 : 서울[엔터]
	  주소록이 추가되었습니다.
	  메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회) : 2
	  == 전체 회원 리스트 ==
	  1번째 사람의 나이, 이름 : 20, 홍길동, 대전
	  2번째 사람의 나이, 이름 : 50, 임꺽정, 경기
	  3번째 사람의 나이, 이름 : 23, 황진이, 서울
	  메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 주소록 삭제, 4. 종료) : 3
		== 전체 회원 리스트 ==
		1번째 사람의 나이, 이름 : 20, 홍길동, 대전
		2번째 사람의 나이, 이름 : 50, 임꺽정, 경기
		3번째 사람의 나이, 이름 : 23, 황진이, 서울
		몇번째 주소록을 삭제하시겠습니까? 2
		2번째 주소록이 삭제되었습니다.
		메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 주소록 삭제, 4. 종료) : 2
		== 전체 회원 리스트 ==
		1번째 사람의 나이, 이름 : 20, 홍길동, 대전
		2번째 사람의 나이, 이름 : 23, 황진이, 서울
		메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 주소록 삭제, 4. 종료) : 4
		프로그램이 종료됩니다.
	  */

	Person* p1 = (Person*)malloc(sizeof(Person));
	Person* p2 = (Person*)malloc(sizeof(Person));

	int menu = 0;
	int count = 0;
	Person* target = NULL;
	while (1) {
		printf("메뉴를 선택해주세요 (1. 주소록 추가, 2. 주소록 조회, 3. 주소록 삭제, 4. 종료):");
		scanf("%d", &menu);
		target = p1;
		if (menu == 1) {
			link_person(p1, target);
			printf("나이를 입력해주세요 :");
			scanf("%d", target->age);

			printf("이름을 입력해주세요 :");
			scanf("%s", target->name);

			printf("주소를 입력해주세요 :");
			scanf("%s", target->address);

			if (count >= 2) {
				link_person(p1, target);
			}
			printf("주소록이 추가되었습니다.\n");
			count++;
			target = target->next;
		}
		else if (menu == 2) {
			print_addr(p1);
		}
		
	}



	return 0;
}