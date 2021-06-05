#include <stdio.h>
int main() {
    int arr[3] = {1,2,3};
    int *parr;
    
    parr = arr; //arr은 배열의 첫번째 원소를 가리키는 포인터로 묵시적 형변환
    //parr = &arr[0]; //같은 동작을 하는 구문
    
    printf("arr[1] : %d \n", arr[1]);
    printf("parr[1] : %d \n", parr[1]);
    
    
    return 0;
}