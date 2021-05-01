#include <stdio.h>

int main()
{
    char ch; //문자
    short sh; //정수
    int i;
    long lo;
    float fl; //실수
    double du;
    
    //char형변수입력
    printf("char 형 변수 입력 : ");
    scanf("%c", &ch);
    
    //short 형 변수 입력
    printf("short 형 변수 입력 : ");
    scanf("%hd", &sh);
    
    //int 형 변수 입력
    printf("int 형 변수 입력 : ");
    scanf("%d", &i);
    
    //long 형 변수 입력
    printf("long 형 변수 입력 : ");
    scanf("%ld", &lo);
    
    //float형 변수 입력
    printf("float 형 변수 입력 : ");
    scanf("%f", &fl);
    
    //double형 변수 입력
    printf("double 형 변수 입력 : ");
    scanf("%lf", &du);
    
    printf("char : %c, short : %d, int : %d \n", ch, sh, i);
    printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
    
    return 0;
}