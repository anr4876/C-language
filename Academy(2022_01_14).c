#include <stdio.h>

int main(void) {


	printf("%X\n", 10);
	
	printf("%f\n", 3.141592);
	
	// %n.f 소수점 n번째 까지 나타냄
	printf("%.6f\n",  3.141592); // 변수 없이 상수 그대로 적은것을 리터럴 상수라 한다.

	// 변수 앞에 const (상수화 키워드) 이미 지정한 변수를 수정 부가 상태로 만들어줌 (심볼릭 상수)
	const float pi = 3.14159265358979;

	printf("%.10f\n", pi);

	// unsigned int -> 부호 비트가 0으로 고정되어 양수만 필요할때 사용한다.

	char num_c = 128;
	short num_s = 128;
	unsigned int num_ui = 128;
	unsigned char num_uc = 128;


	printf("%d\n", num_c);
	printf("%d\n", num_s);
	printf("%d\n", num_ui);
	printf("%d\n", num_uc);


	// 자료형 또는 변수의 크기를 확인할 수 있음. sizeof
	printf("char의 크기 : %d\n", sizeof(char));
	printf("int의 크기 : %d\n", sizeof(int));
	printf("unsigned int의 크기 : %d\n", sizeof(unsigned int));
	printf("unsigned char의 크기 : %d\n", sizeof(unsigned char));

	
}