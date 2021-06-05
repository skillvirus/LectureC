#include <stdio.h>
int main() {
    int a;
    int *p;
    
    printf("정수를 입력하세요: ");
    scanf("%d", &a);
    
    p = &a;
    
    printf("정수형 변수의 주소 : %p \n", &a); //정수형 변수의 메모리 주소
    printf("정수형 변수의 주소 : %p \n", p); //정수형 변수의 메모리 주소
    printf("정수형 변수의 값   : %d \n", *p); //정수형 변수의 값
    
    return 0;
}