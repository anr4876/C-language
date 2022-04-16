// 문제 : 링크드 리스트, remove_all

#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
	int value;
	struct _Node* next;
} Node;

Node* get_new_node(int val) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->value = val;
	new_node->next = NULL;

	return new_node;
}

void print_linked_list(Node* head) {

	Node* target = head->next;

	for (int i = 0;; i++) {

		printf("node[%d] : %d\n", i, target->value);
		target = target->next;

		if (target == NULL) {
			break;
		}
	}
}

void remove_all(Node* head) {

	Node* target = head->next;

	for (int i = 0; ; i++) {

		if (target == NULL) {
			break;
		}

		Node* del_target = target;
		target = target->next;

		free(del_target);
		printf("node[%d] : removed\n", i);

	}

	free(head);
	printf("head : removed\n");
}

int main(void) {
	Node* head = get_new_node(0);
	Node* first_node = get_new_node(10);
	Node* second_node = get_new_node(20);

	head->next = first_node;
	first_node->next = second_node;

	remove_all(head);
	// 출력
	// == remove_all ==
	// node[0] : removed
	// node[1] : removed
	// head : removed

	return 0;
}