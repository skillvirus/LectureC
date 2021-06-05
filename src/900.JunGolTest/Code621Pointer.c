#include <stdio.h>
int main() {
    int a, b;
    int *pa, *pb;
    
    scanf("%d %d", &a, &b);
    pa = &a;
    pb = &b;
    
    printf("%d + %d = %d \n", *pa, *pb, *pa + *pb);
    printf("%d - %d = %d \n", *pa, *pb, *pa - *pb);
    printf("%d * %d = %d \n", *pa, *pb, *pa * *pb);
    printf("%d / %d = %d \n", *pa, *pb, *pa / *pb);
    
    
    return 0;
}