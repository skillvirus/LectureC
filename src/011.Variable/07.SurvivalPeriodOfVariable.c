#include <stdio.h>
int function();
int main() {
    int *pa = function();
    printf("%d \n", *pa);
    
    return 0;
}

int* funciton() {
    int a = 2;
    return &a;
}