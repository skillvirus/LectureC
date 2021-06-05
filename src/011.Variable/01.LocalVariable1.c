#include <stdio.h>
void function();

int main() {
    int a = 3;
    function();
    
    printf("a = %d\n", a);
    
    return 0;
}

void function() {
    int a = 2;
}