#include <stdio.h>

int main()
{
    int a = 1;
    
    printf("전위연산자 수행 후 : %d \n",++a);
    
    a = 1;
    printf("후위연산자 수행 후 : %d \n",a++);
    printf("최종 a : %d \n", a);
    
    return 0;
}