#include <stdio.h>
int main() {
    double num1;
    double num2;
    double num3;
    
    printf("1번째 실수를 입력하세요(소수 네자리 이상) : ");
    scanf("%lf", &num1);
    printf("2번째 실수를 입력하세요(소수 네자리 이상) : ");
    scanf("%lf", &num2);
    printf("3번째 실수를 입력하세요(소수 네자리 이상) : ");
    scanf("%lf", &num3);
    
    printf("1번째 실수 : %.3lf \n", num1
    printf("2번째 실수 : %.3lf \n", num2);
    printf("3번째 실수 : %.3lf \n", num3);
    
    return 0;
}