#include <stdio.h>
int main() {
    int *p;
    int a;
    
    p = &a;
    
    printf("%p\n", p); //포인터p
    printf("%p\n", &a); //변수a의 주소값
    
    return 0;
}