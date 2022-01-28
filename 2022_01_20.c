#include <stdio.h>

void gugu(int dan) {
	
	
	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", dan, i, i * dan);

	}
}

int main(void) {
	
	/*
	for (int j = 1; j <= 3; j++) {
		for (int i = 1; i <= 5; i++) {
			printf("%d", i);

		}
		printf("\n");
	}

	
	for (int dan = 2; dan <= 9; dan++) {
		for (int i = 1; i <= 9; i++) {
			printf("%d X %d = %d \n", dan, i, i * dan);
		}
	}*/
	int dan = 9;
	for (int dan = 1; dan <= 11; dan++) {
		printf("1");
	}
	printf("%d", dan);
	//for (int dan = 2; dan <= 9; dan++) {
	//	gugu(dan);

	//}


	return 0;


}