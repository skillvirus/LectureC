#include <stdio.h>
int main() {
    char word[30] = {"Long Sentence"};
    char *str = word;

    printf("%s \n", str); //원소 값 출력
    printf("%p \n", str); //주소 출력

    return 0;
}