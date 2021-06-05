#include <stdio.h>
void func(void);
static int count = 5; //정적전역변수
int main() {
    while(count--) {
        func();
    }
    return 0;
}

void func(void) {
    static int i = 5;
    printf("i : %d, count : %d \n", i, count);
}