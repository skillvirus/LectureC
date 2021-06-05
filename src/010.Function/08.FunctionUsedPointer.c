#include <stdio.h>
int change_val(int *pi) {
    printf("----- chage_val 함수 시작 -----\n");
    printf("pi 의 값 : %p \n", pi);
    printf("pi 가 가리키는 변수의 값 : %d \n", *pi);

    *pi = 3;

    printf("----- change_val 함수 끝  -----\n");
    return 0;
}

int main() {
    int i = 0;

    printf("i 변수의 주소값 : %p \n", &i);
    printf("호출 이전 i 의 값 : %d \n", i);
    change_val(&i);
    printf("호출 이후 i 의 값 : %d \n", i);

    return 0;
}