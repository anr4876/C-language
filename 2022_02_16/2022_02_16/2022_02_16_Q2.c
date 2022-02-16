#include <stdio.h>
#include <stdbool.h>


typedef struct _Person {
    char* name ;

} Person ;



int main(void) {
    bool b = false;
    b = true;

    if (true && b) {
        printf("참!\n");
    }

    Person p1;
    p1.name = "홍길동";
    printf("이름 : %s\n", p1.name);


    return 0;
}