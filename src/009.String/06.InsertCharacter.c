#include <stdio.h>
int main () {
    char word[30];
    
    printf("30자 이내의 문자열을 입력하세요 : ");
    scanf("%s", word);
    
    printf("문자열 : %s \n", word);
    
    return 0;
}