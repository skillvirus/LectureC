#include <stdio.h>
int how_many_called = 0;
int function();
int main() {
    function();
    function();
    function();
    function();    
    
    return 0;
}

int function() {
    how_many_called++;
    printf("called : %d \n", how_many_called);
    
    return 0;
}
