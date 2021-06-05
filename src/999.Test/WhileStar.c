#include <stdio.h>
int main() {
    int i;
    int j;
    
    i = 0;
    j = 0;
    
    while(i <= 5) {
        while(j <= i) {
            printf("*");
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }
    
    return 0;
}