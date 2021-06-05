#include <stdio.h>
int main() {
    int a;
    int *p;
    
    printf("정수를 입력하세요 : ");
    scanf("%d", &a);
    
    p = &a;
    
    // printf("10으로 나눈 값     : %d \n", *p / 10); //10으로 나눈 값
    // printf("10으로 나눈 나머지 : %d \n", *p % 10); //10으로 나눈 나머지
    
    printf("%d...%d \n", *p / 10, *p % 10);
    
    
    return 0;
}