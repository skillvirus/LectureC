/*
주목표 : 문자열의 각문자의 개수
1. 사용자의 문자열을 입력(배열:word)
2. 영문을 저장할 배열(alpabet)
3. 비교결과를 저장할 배열(counter)
4. word배열과 alpabet 배열과 원소를 비교(반복, for/while)
 4.1 같으면 counter 배열의 인덱스에 개수 저장 (if)
 4.2 다르면 아무처리 없음
5. alpabet 배열의 크기만큼 반복해서 결과 출력 
*/
#include <stdio.h>
#include <string.h>
int main() {
    char word[100]; //사용자가 입력하는 문자열 저장할 정보(배열)
    char alpabet[30]; //사용자가 입력한 문자열과 비교할 기준정보(배열)
    int count = 0; //카운팅역할 정보(정수형)
    int counter[30] = {0,}; //카운팅의 결과 저장할 정보(배열)
    
    printf("문자열을 입력하세요 : ");
    scanf("%s", word);
    
    //기준정보저장
    for (int i = 0; i <= 25; i++) {
        alpabet[i] = i + 97;
    }
    
    //사용자가 입력한 정보와 기준정보 비교
    for (int i = 0; i <= 25; i++) {
        for(int j = 0; j <= strlen(word); j++) {
            if (alpabet[i] == word[j]) { //비교
                counter[i] = ++count; //counter 배열에 저장
            }
        }
        count = 0;
    }
    
    //그 결과 출력
    for (int i = 0; i <= 25; i++) {
        if (counter[i] > 0) {
            printf("%c : %d \n", alpabet[i], counter[i]);    
        }
    }
    
    return 0;
}
