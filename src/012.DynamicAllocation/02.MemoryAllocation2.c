#include <stdio.h>
#include <stdlib.h>

int main() {
    int student; //입력받고자 하는 학생 수
    //int *score; //학생들의 수학점수
    //int sum = 0; //총점
    double *score;
    double sum = 0; //총점
    int i; //루프카운트
    int input; //개별 학생들의 수학점수를 입력받기 위한 변수
    
    printf("입력하고 싶은 학생 수 : ");
    scanf("%d", &student);
    
    score = (double*)malloc(sizeof(double) * student);
    
    for(i = 0; i < student; i++) {
        printf("학생 %d의 점수 : ", i + 1);
        scanf("%d", &input);
        score[i] = input;
    }
    
    for(i = 0; i < student; i++) {
        sum += score[i];
    }
    
    printf("전체 평균은 : %.2f \n", sum / student);
    
    free(score);
    
    return 0;
}