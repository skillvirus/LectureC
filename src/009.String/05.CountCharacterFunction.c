#include <stdio.h>
int str_length(char *str) {
    int i = 0;
    while (str[i]) {
        i++;        
    }
    
    return i;
}

int main () {
    char str[] = {"song myounggyu"};
    
    printf("%s \n", str);
    printf("문자열의 길이 : %d \n", str_length(str));
    
    return 0;
}