#include <stdio.h>

int main()
{
    float a = 3.141592f;
    double b = 3.141592;
    int c = 123;
    
    printf("a 는 %.2f \n", a);
    printf("c 는 %5d \n", c);
    printf("b 는 %6.6f \n", b);
    
    return 0;
}