#include <stdio.h>
#include <stdbool.h>


typedef struct _Person {
    char* name ;

} Person ;



int main(void) {
    bool b = false;
    b = true;

    if (true && b) {
        printf("��!\n");
    }

    Person p1;
    p1.name = "ȫ�浿";
    printf("�̸� : %s\n", p1.name);


    return 0;
}