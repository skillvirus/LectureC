#include <stdio.h>
int global = 0; //전역변수
int function();
int main() {
    global = 10;
    
    function();
    printf("%d \n", global);
    
    return 0;
}

int function() {
    global++;
    
    return 0;
}
