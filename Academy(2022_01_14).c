#include <stdio.h>

int main(void) {


	printf("%X\n", 10);
	
	printf("%f\n", 3.141592);
	
	// %n.f �Ҽ��� n��° ���� ��Ÿ��
	printf("%.6f\n",  3.141592); // ���� ���� ��� �״�� �������� ���ͷ� ����� �Ѵ�.

	// ���� �տ� const (���ȭ Ű����) �̹� ������ ������ ���� �ΰ� ���·� ������� (�ɺ��� ���)
	const float pi = 3.14159265358979;

	printf("%.10f\n", pi);

	// unsigned int -> ��ȣ ��Ʈ�� 0���� �����Ǿ� ����� �ʿ��Ҷ� ����Ѵ�.

	char num_c = 128;
	short num_s = 128;
	unsigned int num_ui = 128;
	unsigned char num_uc = 128;


	printf("%d\n", num_c);
	printf("%d\n", num_s);
	printf("%d\n", num_ui);
	printf("%d\n", num_uc);


	// �ڷ��� �Ǵ� ������ ũ�⸦ Ȯ���� �� ����. sizeof
	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("unsigned int�� ũ�� : %d\n", sizeof(unsigned int));
	printf("unsigned char�� ũ�� : %d\n", sizeof(unsigned char));

	
}