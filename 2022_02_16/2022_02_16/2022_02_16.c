#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#define NAME_SIZE 20
#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
    int age;
    char name[20];
} Person ;



int main(void) {


    Person p1 = { 20, "ȫ�浿" };
    printf("%d\n", p1.age);

    return 0;
}