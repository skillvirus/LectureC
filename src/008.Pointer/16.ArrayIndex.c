#include <stdio.h>
int main() {
    int arr[5] = {1,2,3,4,5};
    
    
    printf("arr[3] : %d \n", arr[3]);
    printf("*(arr + 3) : %d \n", *(arr + 3));
        
    return 0;
}