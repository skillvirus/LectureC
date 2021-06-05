#include <stdio.h>
#include <stdlib.h>
void get_average(int **arr, int numStudent, int numSubject);

int main() {
    int i, j, input;
    int sum = 0;
    int student, subject;
    int **arr;

    printf("과목 수 : ");
    scanf("%d", &subject);
    
    printf("학생 수 : ");
    scanf("%d", &student);
    
    arr = (int**)malloc(sizeof(int*) * subject);
    
    for(i = 0; i < subject; i++) {
        arr[i] = (int*)malloc(sizeof(int) * student);
    }
    
    for (i = 0; i < subject; i++) {
        printf("과목 %d 점수 -------- \n", i + 1);
        
        for (j = 0; j < student; j++) {
            printf("학생 %d 점수 입력 : ", j + 1);
            scanf("%d", &input);
            arr[i][j] = input;
        }
    }
    
    printf("\n");
    
    get_average(arr, student, subject);
    
    for(i = 0; i < subject; i++) {
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}

void get_average(int **arr, int numStudent, int numSubject) {
    int i, j, sum;
    
    for (i = 0; i < numSubject; i++) {
        sum = 0;
        
        for (j = 0; j < numStudent; j++) {
            sum += arr[i][j];
        }
        
        printf("과목 %d 평균 점수 : %d \n", i + 1, sum / numStudent);
    }
    
}