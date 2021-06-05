#include <stdio.h>
int main() {
    int *p;
    int a;
    
    p = &a;
    a = 2;
    
    printf("%d \n", a); //변수 a의 값
    printf("%d \n", *p); //포인터 p의 주소가 가리키는 변수의 값
    
    return 0;
}