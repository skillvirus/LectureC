#include <stdio.h>

int main() {
    char temp1[1] = {'a'};
    char temp2[1] = {'a'};
    
    if (temp1[1] == temp2[1]) {
        printf("두 문자열이 같습니다.\n");    
    }
    else {
        printf("두 문자열이 다릅니다.\n");    
    }
    
    //printf("문자열 연결 %c \n", temp1[1] + temp2[1]);
    
    return 0;
}