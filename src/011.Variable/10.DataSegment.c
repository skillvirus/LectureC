#include <stdio.h>
int gv = 3;
int main() {
    char arr[20] = "What the heck";
    int lv;
    char *str = "Hello World";
    
    printf("Array(arr)     : %p \n", arr);
    printf("L Variable(lv) : %p \n", &lv);
    printf("G Variable(gv) : %p \n", &gv);
    printf("Literal(str)   : %p \n", str);
    
    return 0;
}