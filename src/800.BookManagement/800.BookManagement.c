#include <stdio.h>
int add_book(char (*book_name)[30], char (*auth_name)[30], char (*publ_name)[30], int *borrowed, int *num_total_book);
int compare(char *str1, char *str2);
int search_book(char (*book_name)[30], char (*auth_name)[30], char (*publ_name)[30], int num_total_book);
int borrow_book(int *borrowed);
int return_book(int *borrowed);

int main() {
    int user_choice; //사용자가 선택한 메뉴 번호
    char book_name[100][30]; //책의 제목을 저장할 배열
    char auth_name[100][30]; //책의 저자를 저장할 배열
    char publ_name[100][30]; //책의 출판자를 저장할 배열
    int num_total_book = 0; //현재 저장된 책의 개수
    int borrowed[100]; //대여 상태를 저장할 배열
    
    while(1) {
        printf("도서 관리 프로그램\n");
        printf("메뉴를 선택하세요 \n");
        printf("100. 책을 새로 추가하기 \n"); //1. 책을 새로추가하기
        printf("200. 책을 검색하기 \n"); //2. 책을 검색하기
        printf("300. 책을 빌리기 \n"); //3. 책을 빌리기
        printf("400. 책을 반납하기 \n"); //4. 책을 반납하기
        printf("500. 프로그램 종료 \n"); //5. 프로그램 종료

        printf("당신의 선택은 : ");
        scanf("%d", &user_choice);

        if (user_choice == 100) {
            add_book(book_name, auth_name, publ_name, borrowed, &num_total_book); //책을 새로 추가하기
        } else if (user_choice == 200) {
            search_book(book_name, auth_name, publ_name, num_total_book); //책을 검색하기
        } else if (user_choice == 300) {
            borrow_book(borrowed); //책을 빌리기
        } else if (user_choice == 400) {
            return_book(borrowed); //책을 반납하기
        } else if (user_choice == 500) {
            break; //프로그램 종료
        }
    }
    
    return 0;
}

//책을 추가하는 함수(2차원 char 배열을 인자로 받음)
int add_book(char (*book_name)[30], char (*auth_name)[30], char (*publ_name)[30], int *borrowed, int *num_total_book) {
    printf("추가할 책의 제목 : "); //추가할 책의 제목
    scanf("%s", book_name[*num_total_book]);

    printf("추가할 책의 저자 : "); //추가할 책의 저자
    scanf("%s", auth_name[*num_total_book]);
    
    printf("추가할 책의 출판사 : "); //추가할 책의 출판사
    scanf("%s", publ_name[*num_total_book]);
    
    borrowed[*num_total_book] = 0;
    printf("추가완료! \n"); //추가완료
    (*num_total_book)++;
    
    return 0;
}

//책을 검색하는 함수
int search_book(char (*book_name)[30], char (*auth_name)[30], char (*publ_name)[30], int num_total_book) {
    int user_input; //사용자의 입력값 저장
    char user_search[30];
    int i; //loopCount
    
    printf("어느 것으로 검색할 것인가요? \n"); //어느 것으로 검색할 것인가요?
    printf("1. 책 제목 검색 \n"); //1. 책 제목 검색
    printf("2. 지은이 검색 \n"); //2. 지은이 검색
    printf("3. 출판사 검색 \n"); //3. 출판사 검색
    printf("4. 전체 검색 \n"); //4. 전체검색
    printf("당신의 선택은 : "); //당신의 선택은 : 
    scanf("%d", &user_input);
    
    if(user_input != 4 ) {
        printf("검색할 단어를 입력하세요 : "); //검색할 단어를 입력하세요 : 
        scanf("%s", user_search);    
    }
    
    printf("=====검색결과===== \n"); //검색결과
    
    if(user_input == 1) {
        //입력한 책 제목과 일치하는 배열(book_name)의 정보를 출력
        //printf("user_input : %d \n", user_input);
        //printf("user_search : %s \n", user_search);
        for(i = 0; i < num_total_book; i++) {
            if(compare(book_name[i], user_search)) {
                printf("번호 : %d || 책이름 : %s || 지은이 : %s || 출판사 : %s \n", i, book_name[i], auth_name[i], publ_name[i]);
            }
        }
    } else if(user_input == 2) {
        //입력한 저자와 일치하는 배열(auth_name)의 정보를 출력
        //printf("user_input : %d \n", user_input);
        for(i = 0; i < num_total_book; i++) {
            if(compare(auth_name[i], user_search)) {
                printf("번호 : %d || 책이름 : %s || 지은이 : %s || 출판사 : %s \n", i, book_name[i], auth_name[i], publ_name[i]);
            }
        }
    } else if(user_input == 3) {
        //입력한 출판사와 일치하는 배열(publ_name)의 정보를 출력
        //printf("user_input : %d \n", user_input);
        for(i = 0; i < num_total_book; i++) {
            if(compare(publ_name[i], user_search)) {
                printf("번호 : %d || 책이름 : %s || 지은이 : %s || 출판사 : %s \n", i, book_name[i], auth_name[i], publ_name[i]);
            }
        }
    } else if (user_input == 4) {
        //전체 조회 기능
        for(i = 0; i < num_total_book; i++) {
            printf("번호 : %d || 책이름 : %s || 지은이 : %s || 출판사 : %s \n", i, book_name[i], auth_name[i], publ_name[i]);
        }    
    }
    
    
    return 0;
}


//문자열 비교 함수
int compare(char *str1, char *str2) {
    while (*str1) {
        if (*str1 != *str2) {
            return 0;
        }

        str1++;
        str2++;
    }

    if (*str2 == '\0') {
        return 1;
    }

    return 0;
}

//책을 빌리는 함수
int borrow_book(int *borrowed) {
    int book_num; //사용자로부터 책 번호를 받을 변수
    
    printf("빌릴 책의 번호를 입력해 주세요 \n");
    printf("책 번호 : ");
    scanf("%d", &book_num);
    
    if(borrowed[book_num] == 1) {
        printf("이미 대출된 책입니다. \n");
    } else {
        printf("책이 성공적으로 대출되었습니다. \n");
        borrowed[book_num] = 1;
    }
    
    return 0;
}

//책을 반납하는 함수
int return_book(int *borrowed) {
    int book_num; //사용자로부터 책 번호를 받을 변수
    
    printf("반납할 책의 번호를 입력해 주세요 \n");
    printf("책 번호 : ");
    scanf("%d", &book_num);
    
    if(borrowed[book_num] == 0) {
        printf("대출되지 않은 책이거나, 이미 반납된 책입니다. \n");
    } else {
        printf("책이 성공적으로 반납되었습니다. \n");
        borrowed[book_num] = 0;
    }
    
    return 0;
}