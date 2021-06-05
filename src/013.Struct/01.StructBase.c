#include <stdio.h>
struct Human {
    double height; //키
    double weight; //몸무게
    double age; //나이
}; //필수

int main() {
    struct Human human;
    
    human.age = 46;
    human.height = 174.5;
    human.weight = 71.5;
    
    printf("-----HUMAN 에 대한 정보-----\n");
    printf("나이   : %6.0f \n", human.age);
    printf("키     : %6.2f \n", human.height);
    printf("몸무게 : %6.2f \n", human.weight);
    
    return 0;
}