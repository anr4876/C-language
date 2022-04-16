#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct _Person {
	int age;
	char name[20];
	char address[20];
	struct _Person* next;

} Person;

void print_addr(Person* head) {
	printf("== 전체 회원 리스트 ==\n");
	Person* target = NULL;

	target = head;

	for (int i = 0; ; i++) {

		printf("나이, 이름, 주소 : %d, %s, %s\n", target->age, target->name, target->address);

		target = target->next;

		if (target == NULL) {
			break;
		}
	}
}

void link_person(Person* head, Person* person) {

	if (head != NULL) {

		Person* target = NULL;
		target = head;

		for (int i = 0; ; i++) {
			if (target->next == NULL) {
				break;
			}

			target = target->next;
		}

		target->next = person;
	}


}

int main(void) {

	// 삭제 기능과 종료 기능을 만들고 구현해주세요.

	// 예시
	/*
	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 주소록 삭제, 4. 종료) : 1
	나이를 입력해주세요 : 20[엔터]
	이름을 입력해주세요 : 홍길동[엔터]
	주소를 입력해주세요 : 대전[엔터]
	주소록이 추가되었습니다.
	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 주소록 삭제, 4. 종료) : 1
	나이를 입력해주세요 : 50[엔터]
	이름을 입력해주세요 : 임꺽정[엔터]
	주소를 입력해주세요 : 경기[엔터]
	주소록이 추가되었습니다.
	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 주소록 삭제, 4. 종료) : 1
	나이를 입력해주세요 : 23[엔터]
	이름을 입력해주세요 : 황진이[엔터]
	주소를 입력해주세요 : 서울[엔터]
	주소록이 추가되었습니다.
	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회, 3. 주소록 삭제, 4. 종료) : 2
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
	int menu = 0;
	int count = 0;

	Person* first = NULL;

	while (1) {
		printf("메뉴를 선택해주세요 (1. 주소록 추가, 2. 주소록 조회, 3. 주소록 삭제, 4. 종료):");
		scanf("%d", &menu);

		if (menu == 1) {

			Person* current = (Person*)malloc(sizeof(Person));

			printf("나이를 입력해주세요 :");
			scanf("%d", &current->age);

			printf("이름을 입력해주세요 :");
			scanf("%s", current->name);

			printf("주소를 입력해주세요 :");
			scanf("%s", current->address);

			current->next = NULL;

			if (count == 0) { // current가 첫번째 사람일 경우
				first = current;
			}
			else {
				link_person(first, current);
			}

			printf("주소록이 추가되었습니다.\n");
			count++;
		}
		else if (menu == 2) {
			print_addr(first);
		}
		else if (menu == 3) {
			/*print_addr(first);
			printf("몇번째 주소록을 삭제하시겠습니까? ");
			int target = -1;
			scanf("%d", &target);


			for (int i = target - 1; i < count - 1; i++) {
				people[i] = people[i + 1];
			}

			count--;

			printf("%d번째 주소록이 삭제되었습니다.\n", target);*/
		}
		else if (menu == 4) {
			printf("프로그램이 종료됩니다.\n");
			break;
		}
	}