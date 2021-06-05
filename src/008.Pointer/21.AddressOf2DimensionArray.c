#include <stdio.h>
// int main() {
//     int arr[2][3];
    
//     printf("arr[0]     : %p \n", arr[0]);
//     printf("&arr[0][0] : %p \n", &arr[0][0]);
    
//     printf("arr[1]     : %p \n", arr[1]);
//     printf("&arr[1][0] : %p \n", &arr[1][0]);
    
//     return 0;
// }

int main() {
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  printf("전체 크기 : %d \n", sizeof(arr));
  printf("총 열의 개수 : %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
  printf("총 행의 개수 : %d \n", sizeof(arr) / sizeof(arr[0]));
}