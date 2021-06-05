#include <stdio.h>
int* function();
int main() {
    int *pa = function();
    printf("%d \n", *pa);
    return 0;
}

int* function() {
    static int a = 2;
    return &a;
}