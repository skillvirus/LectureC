#include <stdio.h>
int main() {
    char a;
    char *pa;
    pa = &a;
    
    printf("pa     : %p \n", pa);
    printf("pa + 1 : %p \n", pa + 1);
    
    return 0;
}