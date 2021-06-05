#include <stdio.h>
int main() {
    int arr[2][3] = {{1,2,3}, {4,5,6}};
    int (*parr)[3];
    
    parr = arr;
    
    printf("parr[1][2] : %d, arr[1][2] : %d \n", parr[1][2], arr[1][2]);
    
    return 0;
}