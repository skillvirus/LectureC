#include <stdio.h>
int global;
int function();
int main() {
    function();
    printf("%d \n", global);
    
    return 0;
}

int function() {
    global++;
    
    return 0;
}